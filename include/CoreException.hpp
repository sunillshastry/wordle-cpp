#ifndef __CORE_EXCEPTION_HPP__
#define __CORE_EXCEPTION_HPP__

#include <exception>
#include <string>

class CoreException : public std::exception {
  private:
  std::string message;
  int code;

  public:
  CoreException();
  CoreException(const std::string message);
  CoreException(const int code);

  CoreException(const std::string message, const int code);

  std::string get_message();
  int get_code();
};

#endif
