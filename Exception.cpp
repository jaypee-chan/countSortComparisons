#include "Exception.hpp"

ExceptionFile::ExceptionFile(std::string const &msg) throw()
{
  this->_msg = "File exception : " + msg;
}

const char *ExceptionFile::what() const throw()
{
  return (_msg.c_str());
}

ExceptionConvert::ExceptionConvert(std::string const &msg) throw()
{
  this->_msg = "Convert exception : " + msg;
}

const char *ExceptionConvert::what() const throw()
{
  return (_msg.c_str());
}
