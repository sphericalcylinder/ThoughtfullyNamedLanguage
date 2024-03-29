#include <exception>
#include <iostream>

#pragma once

class TNLUndelcaredVariable : public std::exception {
    // Used when an unknown token is encountered
  private:
    std::string message;

  public:
    TNLUndelcaredVariable(std::string msg) : message(msg) {}

    std::string what() { return message; }
};

class TNLSyntax : public std::exception {
    // Used when the TNL syntax is incorrect
  private:
    std::string message;

  public:
    TNLSyntax(std::string msg) : message(msg) {}

    std::string what() { return message; }
};

class TNLUnidentifiedToken : public std::exception {
    // Used when a variable is assigned a value before being declared
  private:
    std::string message;

  public:
    TNLUnidentifiedToken(std::string msg) : message(msg) {}

    std::string what() { return message; }
};

class TNLMismatchedType : public std::exception {
    // Used when a variable is assigned a value that's different than its type
  private:
    std::string message;

  public:
    TNLMismatchedType(std::string msg) : message(msg) {}

    std::string what() { return message; }
};

class TNLLongString : public std::exception {
    // Used when a variable is assigned a value that's different than its type
  private:
    std::string message;

  public:
    TNLLongString(std::string msg) : message(msg) {}

    std::string what() { return message; }
};