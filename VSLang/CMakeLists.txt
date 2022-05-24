cmake_minimum_required(VERSION 3.10)

project(VSharp)

set(CXX_STANDARD 23)

set(${VSLANG_HEADERS} api.h id.h lexer.h)

add_library(VSLang SHARED id.h id.cpp lexer.h lexer.cpp)