#include "../include/retrieve_user_guess.hpp"

#include <iostream>
#include <string>

std::string retrieve_user_guess() {
  std::string user_guess;

  std::cout << "Enter your guess: ";
  std::cin >> user_guess;

  while (true) {
    if (user_guess.length() == 5) {
      return user_guess;
    }

    std::cout << "Your guess must be exactly five characters!\n";
    std::cout << "Try again: ";
    std::cin >> user_guess;
  }
}
