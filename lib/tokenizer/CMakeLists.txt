### This file was not part of the original tokenizer repository.

project(Tokenizer)

set(HEADERS
     src/BolState.h
     src/BolStateTest.h
     src/CKeywordTest.h
     src/CSharpTokenizer.h
     src/CSharpTokenizerTest.h
     src/CTokenizer.h
     src/CTokenizerTest.h
     src/CharSource.h
     src/CharSourceTest.h
     src/CppTokenizer.h
     src/CppTokenizerTest.h
     src/JavaTokenizer.h
     src/JavaTokenizerTest.h
     src/Keyword.h
     src/NestedClassState.h
     src/NestedClassStateTest.h
     src/PHPTokenizer.h
     src/PHPTokenizerTest.h
     src/PythonTokenizer.h
     src/PythonTokenizerTest.h
     src/SymbolTable.h
     src/SymbolTableTest.h
     src/Token.h
     src/TokenId.h
     src/TokenizerBase.h
     src/TokenizerBaseTest.h
)
set(SOURCES
     src/CSharpTokenizer.cpp
     src/CTokenizer.cpp
     src/CppTokenizer.cpp
     src/JavaTokenizer.cpp
     src/NestedClassState.cpp
     src/PHPTokenizer.cpp
     src/PythonTokenizer.cpp
     src/SymbolTable.cpp
     src/TokenId.cpp
     src/TokenizerBase.cpp
)

add_library(${PROJECT_NAME}
            ${PROJECT_SOURCE_DIR}/${SOURCES}
            ${PROJECT_SOURCE_DIR}/${HEADERS})
add_library(hc::tokenizer ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
     PUBLIC ${PROJECT_SOURCE_DIR}
)
