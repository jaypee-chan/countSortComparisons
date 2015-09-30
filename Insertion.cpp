#include "Insertion.hpp"

Insertion::Insertion(std::vector<float> vals) : ASorting(vals)
{
  this->_sortName = "Insertion";
}

void Insertion::sorting()
{
  int j;
  float val;

  for (int i = 1; i < _value.size(); ++i)
  {
    j = 0;
    val = _value[i];
    while (j < i)
    {
      ++this->_comparison;
      if (_value[j] > _value[i])
        break;
      ++j;
    }
    _value.erase(_value.begin() + i);
    _value.insert(_value.begin() + j, val);
  }
}
