#ifndef HC_INCLUDE_TOKENIZER_H_
#define HC_INCLUDE_TOKENIZER_H_

#include "include/honor_code/languages.h"
#include "include/honor_code/tokens.h"

class Tokenizer {
  private:
    Language                 language;
    Tokens                   tokens;

    int mask_token(int token);

  public:
    Tokenizer(Language language, const std::string& filename);
    ~Tokenizer() {}

    Tokens get_tokens() { return tokens; }
};

#endif  // HC_INCLUDE_TOKENIZER_H_
