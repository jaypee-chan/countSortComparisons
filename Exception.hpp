#pragma once

#include <exception>
#include <string>
#include <iostream>

class ExceptionFile : public std::exception
{
public:
  ExceptionFile(std::string const &msg) throw();
  virtual ~ExceptionFile() throw() {};
  virtual const char *what() const throw();
protected:
  std::string _msg;
};

class ExceptionConvert : public std::exception
{
public:
  ExceptionConvert(std::string const &msg) throw();
  virtual ~ExceptionConvert() throw() {};
  virtual const char *what() const throw();
protected:
  std::string _msg;
};
