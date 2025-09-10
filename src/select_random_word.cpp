#include "../include/select_random_word.hpp"

#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

std::string select_random_word(std::vector<std::string>& words_list) {
  // Set the randomness based on time (seconds)
  srand(time(NULL));

  // Generate a random number with max limit = words_list length
  const int RANDOM_NUMBER = rand() % words_list.size();

  return words_list.at(RANDOM_NUMBER);
}
