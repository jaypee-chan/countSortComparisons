#include "Bubble.hpp"

Bubble::Bubble(std::vector<float> vals) : ASorting(vals)
{
  this->_sortName = "Bubble";
}

void
Bubble::sorting()
{
  int tmp;
  int tmp2;
  int j;

  for (int i = 0; i < _value.size() - 1; i++)
  {
    j = i + 1;
    while (j < _value.size())
    {
      ++_comparison;
      if (_value[i] > _value[j])
        std::swap(_value[i], _value[j]);
      ++j;
    }
  }
}
