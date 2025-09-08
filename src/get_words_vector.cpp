#include "../include/get_words_vector.hpp"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "../include/CoreException.hpp"
#include "../include/string_trim.hpp"

// Relative file path of the words file
const std::string REL_FILE_PATH = "data/";

// Name of the file containing all the words: /data/words.txt
const std::string FILE_NAME = "words.txt";

std::vector<std::string> get_words_vector() {
  std::vector<std::string> words_vector;

  // Combining relative path + file name (words.txt)
  std::string path = REL_FILE_PATH + FILE_NAME;

  std::ifstream words_file(path);

  // Check if the file itself exists
  if (!words_file) {
    throw CoreException(
        "FileNotFoundException: Provided path and filename is "
        "incorrect or does not exist",
        1);
  }

  // Check if the file is opened
  if (!words_file.is_open()) {
    throw CoreException(
        "FileNotOpenException: Program is unable to open provided file", -1);
  }

  std::string file_line_cursor;
  while (std::getline(words_file, file_line_cursor)) {
    std::string formatted_line_word = string_trim(file_line_cursor);
    words_vector.push_back(formatted_line_word);
  }

  words_file.close();

  return words_vector;
}
