cmake_minimum_required(VERSION 3.10)

project(VSharp)

set(CXX_STANDARD 23)

add_library(VSLang STATIC id.h id.cpp lexer.h lexer.cpp)