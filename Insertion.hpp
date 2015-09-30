#ifndef INSERTION_HPP_
# define INSERTION_HPP_

#include "ASorting.hpp"

class Insertion : public ASorting
{
public:
  Insertion(std::vector<float> val);
  ~Insertion() {};
  void sorting();
  inline void swap(float &a, float &b)
  {
    float c = a;
    a = b;
    b = c;
  };
};

#endif
