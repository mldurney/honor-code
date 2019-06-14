#include "include/honor_code/tokenizer.h"

#include <iostream>
#include <sstream>

#include "lib/tokenizer/src/CSharpTokenizer.h"
#include "lib/tokenizer/src/CTokenizer.h"
#include "lib/tokenizer/src/CppTokenizer.h"
#include "lib/tokenizer/src/JavaTokenizer.h"
#include "lib/tokenizer/src/PHPTokenizer.h"
#include "lib/tokenizer/src/PythonTokenizer.h"

Tokenizer::Tokenizer(Language language, const std::string& filename) {
    TokenizerBase*           tokenizer;
    CharSource               cs;
    std::vector<std::string> opt = {"file"};

    switch (language) {
        case C:
            tokenizer = new CTokenizer(cs, filename, opt);
            break;
        case Cpp:
            tokenizer = new CppTokenizer(cs, filename, opt);
            break;
        case CSharp:
            tokenizer = new CSharpTokenizer(cs, filename, opt);
            break;
        case Java:
            tokenizer = new JavaTokenizer(cs, filename, opt);
            break;
        case PHP:
            tokenizer = new PHPTokenizer(cs, filename, opt);
            break;
        case Python:
            tokenizer = new PythonTokenizer(cs, filename, opt);
            break;
        default:
            std::cerr << "Tokenizer: You've met a terrible fate, haven't you?"
                      << std::endl;
            exit(1);
    }

    std::stringstream ss;
    std::string       token;
    auto              old_buffer = std::cout.rdbuf(ss.rdbuf());

    // TODO use tokenizer.num_tokens to statically allocate vectors

    tokenizer->code_tokenize();
    while (std::getline(ss, token, '\n')) {
        tokens.code_tokens.push_back(token);
    }

    ss.str(std::string());

    tokenizer->numeric_tokenize();
    while (std::getline(ss, token, ' ')) {
        int int_token = std::stoi(token);
        tokens.int_tokens.push_back(int_token);
        tokens.masked_tokens.push_back(mask_token(int_token));
    }

    std::cout.rdbuf(old_buffer);

    delete tokenizer;
}

int Tokenizer::mask_token(int token) {
    int character     = 0;
    int keyword_shift = -297;
    int other_token   = -1;
    int number        = 1;
    int identifier    = 2;

    if (TokenId::is_character(token)) {
        return character;
    } else if (TokenId::is_keyword(token)) {
        return token + keyword_shift;
    } else if (TokenId::is_other_token(token)) {
        return other_token;
    } else if (TokenId::is_number(token)) {
        return number;
    } else if (TokenId::is_identifier(token)) {
        return identifier;
    } else {
        std::cerr << "mask_token: You've met a terrible fate, haven't you?"
                  << std::endl;
        exit(1);
    }
}
