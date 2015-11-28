#ifndef INSERTION_HPP_
# define INSERTION_HPP_

#include "ASorting.hpp"

class Insertion : public ASorting
{
public:
  Insertion(std::vector<float> val);
  ~Insertion() {};
  void sorting();
};

#endif
