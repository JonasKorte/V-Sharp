#pragma once
#ifdef WIN32
#ifdef VSLANG_EXPORT
#define VSLANG_API __declspec(dllexport)
#else
#define VSLANG_API __declspec(dllimport)
#endif
#else
#define VSLANG_API
#endif