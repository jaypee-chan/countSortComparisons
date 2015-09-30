#ifndef MERGE_HPP_
# define MERGE_HPP_

#include "ASorting.hpp"

class Merge : public ASorting
{
public:
  Merge(std::vector<float> vals);
  ~Merge() {};
  void sorting();
private:
  void merge(std::vector<float> &result, std::vector<float> l, std::vector<float> r);
  std::vector<float> mergeSort(std::vector<float> s);
  std::vector<float> _result;
};

#endif
