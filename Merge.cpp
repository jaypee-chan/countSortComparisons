#include "Merge.hpp"

Merge::Merge(std::vector<float> vals) : ASorting(vals)
{
   this->_sortName = "Merge";
}

void Merge::sorting()
{
  std::vector<float> v = _value;
  _value = mergeSort(v);
}

void
Merge::merge(std::vector<float> &result,
   std::vector<float> left, std::vector<float> right)
{
  int i = 0;
  int j = 0;

  while (i < left.size() && j < right.size())
  {
    ++_comparison;
    if (left[i] < right[j])
      result.push_back(left[i++]);
    else
      result.push_back(right[j++]);
  }
  while (i < left.size())
    result.push_back(left[i++]);
  while (j < right.size())
    result.push_back(right[j++]);
}

std::vector<float> Merge::mergeSort(std::vector<float> val)
{
  std::vector<float> left;
  std::vector<float> right;
  std::vector<float> result;
  int middle = (val.size()) / 2;

  if (val.size() <= 1)
   return val;
  for (int i = 0; i < middle; i++)
    left.push_back(val[i]);
  for (int i = middle; i < (int)val.size(); i++)
    right.push_back(val[i]);
  left = mergeSort(left);
  right = mergeSort(right);
  merge(result, left, right);
  return result;
}
