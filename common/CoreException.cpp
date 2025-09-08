#include "../include/CoreException.hpp"

CoreException::CoreException() {
  this->message = "";
  this->code    = 0;
}

CoreException::CoreException(const std::string message) {
  this->message = message;
  this->code    = 0;
}

CoreException::CoreException(const int code) {
  this->message = "";
  this->code    = code;
}

CoreException::CoreException(const std::string message, const int code) {
  this->message = message;
  this->code    = code;
}

std::string CoreException::get_message() { return this->message; }

int CoreException::get_code() { return this->code; }
