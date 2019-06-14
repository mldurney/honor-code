
/*
 * Auto-generated file
 */

#ifndef TOKEN_H
#define TOKEN_H

#include "TokenId.h"

class Token {
private:
	typedef std::map <int, std::string> TokenMap;
	TokenMap token_name;
	TokenMap token_symbol;

public:
	enum TokenNum {
		FIRST = TokenId::OTHER_TOKEN,
		AND_EQUAL,
		ARROW,
		AT_EQUAL,
		BLOCK_COMMENT,
		BOOLEAN_AND,
		BOOLEAN_OR,
		CHAR_LITERAL,
		CONCAT_EQUALS,
		DIV_EQUAL,
		DIV_FLOOR,
		DIV_FLOOR_EQUAL,
		DOC_COMMENT,
		ELIPSIS,
		EQUAL,
		GREATER_EQUAL,
		HERE_DOCUMENT,
		IDENTICAL,
		JAVADOC_COMMENT,
		LAMBDA,
		LESS_EQUAL,
		LINE_COMMENT,
		LSHIFT,
		LSHIFT_EQUAL,
		MEMBER_FROM_OBJECT_PTR,
		MEMBER_PTR,
		MEMBER_PTR_FROM_OBJECT,
		MEMBER_PTR_FROM_OBJECT_PTR,
		MINUS_EQUAL,
		MINUS_MINUS,
		MOD_EQUAL,
		NOT_EQUAL,
		NOT_IDENTICAL,
		NULL_COALESCE,
		NULL_CONDITIONAL,
		OR_EQUAL,
		PLUS_EQUAL,
		PLUS_PLUS,
		RAISE,
		RAISE_EQUAL,
		RSHIFT,
		RSHIFT_ARITHMETIC,
		RSHIFT_ARITHMETIC_EQUAL,
		RSHIFT_EQUAL,
		RSHIFT_LOGICAL,
		RSHIFT_LOGICAL_EQUAL,
		SCOPE,
		SPACESHIP,
		STRING_LITERAL,
		TIMES_EQUAL,
		TOKEN_PASTE,
		XOR_EQUAL,

	};

	Token() {
		token_name = {
			{LESS_EQUAL, "LESS_EQUAL" },
			{LSHIFT_EQUAL, "LSHIFT_EQUAL" },
			{BLOCK_COMMENT, "BLOCK_COMMENT" },
			{NOT_EQUAL, "NOT_EQUAL" },
			{SPACESHIP, "SPACESHIP" },
			{TIMES_EQUAL, "TIMES_EQUAL" },
			{MOD_EQUAL, "MOD_EQUAL" },
			{RSHIFT_ARITHMETIC_EQUAL, "RSHIFT_ARITHMETIC_EQUAL" },
			{BOOLEAN_AND, "BOOLEAN_AND" },
			{MEMBER_PTR, "MEMBER_PTR" },
			{CHAR_LITERAL, "CHAR_LITERAL" },
			{XOR_EQUAL, "XOR_EQUAL" },
			{RSHIFT_EQUAL, "RSHIFT_EQUAL" },
			{RSHIFT_LOGICAL_EQUAL, "RSHIFT_LOGICAL_EQUAL" },
			{DOC_COMMENT, "DOC_COMMENT" },
			{DIV_FLOOR, "DIV_FLOOR" },
			{CONCAT_EQUALS, "CONCAT_EQUALS" },
			{PLUS_EQUAL, "PLUS_EQUAL" },
			{STRING_LITERAL, "STRING_LITERAL" },
			{RAISE_EQUAL, "RAISE_EQUAL" },
			{LSHIFT, "LSHIFT" },
			{RSHIFT_LOGICAL, "RSHIFT_LOGICAL" },
			{GREATER_EQUAL, "GREATER_EQUAL" },
			{ELIPSIS, "ELIPSIS" },
			{AT_EQUAL, "AT_EQUAL" },
			{JAVADOC_COMMENT, "JAVADOC_COMMENT" },
			{NULL_COALESCE, "NULL_COALESCE" },
			{RSHIFT, "RSHIFT" },
			{HERE_DOCUMENT, "HERE_DOCUMENT" },
			{RSHIFT_ARITHMETIC, "RSHIFT_ARITHMETIC" },
			{MEMBER_PTR_FROM_OBJECT_PTR, "MEMBER_PTR_FROM_OBJECT_PTR" },
			{NOT_IDENTICAL, "NOT_IDENTICAL" },
			{MEMBER_PTR_FROM_OBJECT, "MEMBER_PTR_FROM_OBJECT" },
			{MEMBER_FROM_OBJECT_PTR, "MEMBER_FROM_OBJECT_PTR" },
			{TOKEN_PASTE, "TOKEN_PASTE" },
			{PLUS_PLUS, "PLUS_PLUS" },
			{LAMBDA, "LAMBDA" },
			{IDENTICAL, "IDENTICAL" },
			{ARROW, "ARROW" },
			{DIV_EQUAL, "DIV_EQUAL" },
			{NULL_CONDITIONAL, "NULL_CONDITIONAL" },
			{LINE_COMMENT, "LINE_COMMENT" },
			{MINUS_MINUS, "MINUS_MINUS" },
			{SCOPE, "SCOPE" },
			{AND_EQUAL, "AND_EQUAL" },
			{BOOLEAN_OR, "BOOLEAN_OR" },
			{EQUAL, "EQUAL" },
			{RAISE, "RAISE" },
			{MINUS_EQUAL, "MINUS_EQUAL" },
			{DIV_FLOOR_EQUAL, "DIV_FLOOR_EQUAL" },
			{OR_EQUAL, "OR_EQUAL" },

		};

		token_symbol = {
			{NULL_COALESCE, "??" },
			{AT_EQUAL, "@=" },
			{MINUS_EQUAL, "-=" },
			{PLUS_EQUAL, "+=" },
			{DOC_COMMENT, "///" },
			{AND_EQUAL, "&=" },
			{RSHIFT_EQUAL, ">>=" },
			{XOR_EQUAL, "^=" },
			{MEMBER_PTR_FROM_OBJECT_PTR, "->*" },
			{LESS_EQUAL, "<=" },
			{SPACESHIP, "<=>" },
			{BOOLEAN_OR, "||" },
			{RSHIFT_ARITHMETIC, ">>" },
			{RSHIFT_ARITHMETIC_EQUAL, ">>=" },
			{TOKEN_PASTE, "##" },
			{GREATER_EQUAL, ">=" },
			{IDENTICAL, "===" },
			{RAISE_EQUAL, "**=" },
			{NOT_EQUAL, "!=" },
			{MEMBER_PTR, "->" },
			{NOT_IDENTICAL, "!==" },
			{RSHIFT_LOGICAL, ">>>" },
			{RSHIFT_LOGICAL_EQUAL, ">>>=" },
			{DIV_FLOOR_EQUAL, "//=" },
			{OR_EQUAL, "|=" },
			{JAVADOC_COMMENT, "/**...*/" },
			{LAMBDA, "=>" },
			{BOOLEAN_AND, "&&" },
			{MINUS_MINUS, "--" },
			{PLUS_PLUS, "++" },
			{LSHIFT, "<<" },
			{MEMBER_FROM_OBJECT_PTR, "->" },
			{CONCAT_EQUALS, ".=" },
			{RSHIFT, ">>" },
			{RAISE, "**" },
			{DIV_FLOOR, "//" },
			{LINE_COMMENT, "//..." },
			{HERE_DOCUMENT, "<<<..." },
			{NULL_CONDITIONAL, "?." },
			{MOD_EQUAL, "%=" },
			{DIV_EQUAL, "/=" },
			{EQUAL, "==" },
			{BLOCK_COMMENT, "/*...*/" },
			{MEMBER_PTR_FROM_OBJECT, ".*" },
			{ARROW, "->" },
			{CHAR_LITERAL, "'.'" },
			{SCOPE, "::" },
			{LSHIFT_EQUAL, "<<=" },
			{ELIPSIS, "..." },
			{TIMES_EQUAL, "*=" },
			{STRING_LITERAL, "\"...\"" },

		};
	}

	const std::string & to_string(int k) const {
		static const std::string UNKNOWN("???");

		auto t = token_name.find(k);
		return t == token_name.end() ? UNKNOWN : t->second;
	}

	const std::string & to_symbol(int k) const {
		static const std::string UNKNOWN("???");

		auto t = token_symbol.find(k);
		return t == token_symbol.end() ? UNKNOWN : t->second;
	}
};
#endif /* TOKEN_H */
