#ifndef BUBBLE_HPP_
# define BUBBLE_HPP_

#include "ASorting.hpp"

class Bubble : public ASorting
{
public:
  Bubble(std::vector<float> vals);
  ~Bubble() {};
  void sorting();
};

#endif
