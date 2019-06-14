#ifndef HC_INCLUDE_TOKENS_H_
#define HC_INCLUDE_TOKENS_H_

#include <string>
#include <tuple>
#include <vector>

struct Tokens {
    std::vector<std::string> code_tokens;
    std::vector<int>         int_tokens;
    std::vector<int>         masked_tokens;
};

#endif  // HC_INCLUDE_TOKENS_H_
