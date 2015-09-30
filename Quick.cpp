#include "Quick.hpp"

Quick::Quick(std::vector<float> vals) : ASorting(vals)
{
  this->_sortName = "Quick";
}

void Quick::sorting()
{
  std::vector<float> val = _value;
  _value = quicksort(val, 0, _value.size());
}

float
Quick::qPartition(std::vector<float> &val, float begin, float last)
{
  int piv = begin;

  for (float j = begin + 1; j < last; ++j)
  {
    if (++_comparison && val[j] < val[piv])
    {
      val.insert(val.begin() + piv, val[j]);
      val.erase(val.begin() + j + 1);
      ++piv;
    }
  }
  return (piv);
}

std::vector<float>
Quick::quicksort(std::vector<float> &val, float begin, float last)
{
  float pivot;

  if (begin < last)
  {
    pivot = qPartition(val, begin, last);
    quicksort(val, begin, pivot);
    quicksort(val, pivot + 1, last);
  }
  return val;
}
