#include <iostream>
#include <string>

#include "include/honor_code/tokenizer.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " filename" << std::endl;
    }

    Tokenizer tokenizer = Tokenizer(Cpp, argv[1]);
    Tokens    tokens    = tokenizer.get_tokens();

    std::cout << "Printing tokens (original int, masked int, token)...\n"
              << std::endl;

    for (unsigned i = 0; i < tokens.code_tokens.size(); i++) {
        std::cout << tokens.int_tokens[i] << "\t" << tokens.masked_tokens[i]
                  << "\t" << tokens.code_tokens[i] << std::endl;
    }

    std::cout << "\nDone printing tokens!" << std::endl;
}
