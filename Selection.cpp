#include "Selection.hpp"

Selection::Selection(std::vector<float> vals) : ASorting(vals)
{
  this->_sortName = "Selection";
}

void Selection::sorting()
{
  int j;
  int minPos;
  float tmp;

  for (int i = 0; i < this->_value.size(); ++i)
  {
    minPos = i;
    for (j = i + 1; j < this->_value.size(); ++j)
    {
      ++_comparison;
      if (_value[j] < this->_value[minPos])
        minPos = j;
    }
    if (minPos != i)
      this->swap(_value[i], this->_value[minPos]);
  }
}
