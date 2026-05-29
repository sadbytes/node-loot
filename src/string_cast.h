#pragma once

#include <string>
#include <v8.h>

enum class CodePage {
  LOCAL,
  LATIN1,
  UTF8
};

#ifdef _WIN32
using PathString = std::wstring;

uint32_t windowsCP(CodePage codePage);

std::wstring toWC(const char * const &source, CodePage codePage, size_t sourceLength);

std::string toMB(const wchar_t * const &source, CodePage codePage, size_t sourceLength);

std::wstring u8Tou16(const std::string &input);
#else
using PathString = std::string;

std::string toWC(const char * const &source, CodePage codePage, size_t sourceLength);

std::string toMB(const char * const &source, CodePage codePage, size_t sourceLength);
#endif
