#ifndef QUICK_HPP_
# define QUICK_HPP_

#include "ASorting.hpp"

class Quick : public ASorting
{
public:
  Quick(std::vector<float> vals);
  ~Quick() {};
  void sorting();
private:
  std::vector<float> quicksort(std::vector<float> &val, float begin, float last);
  float qPartition(std::vector<float> &val, float begin, float last);

};

#endif
