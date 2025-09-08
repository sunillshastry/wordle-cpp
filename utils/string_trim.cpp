#include "./../include/string_trim.hpp"

std::string string_trim(const std::string& str) {
  size_t first = 0;
  size_t last  = str.size();

  while (first < str.size() &&
         std::isspace(static_cast<unsigned char>(str[first]))) {
    first++;
  }

  if (first == str.size()) {
    return "";
  }

  last = str.size() - 1;
  while (last > first && std::isspace(static_cast<unsigned char>(str[last]))) {
    last--;
  }

  return str.substr(first, last - first + 1);
}
