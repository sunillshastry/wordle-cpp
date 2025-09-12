#include "../include/display_game.hpp"

#include <cstddef>
#include <iostream>

void display_game(const char words_list[5][5]) {
  for (size_t i = 0; i < 5; ++i) {
    // Single row iteration
    for (size_t j = 0; j < 5; ++j) {
      std::cout << words_list[i][j] << "\t";
    }
    std::cout << "\n\n";
  }
}
