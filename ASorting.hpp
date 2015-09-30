#ifndef ASORTING_HPP_
# define ASORTING_HPP_

#include <vector>
#include <deque>
#include <iostream>

class ASorting
{
public:
  ASorting(std::vector<float> vals) : _value(vals)
  {
    _comparison = 0;
  };
  virtual ~ASorting() {};
  virtual void sorting() = 0;
  void displayComparisons() const
  {
        std::cout << this->getSortName() << " sort : " << this->getComparison() << " comparisons." << std::endl;

  };
  unsigned int getComparison() const
  {
    return (_comparison);
  };
  void displaySort() const
  {
    for (std::vector<float>::const_iterator it = _value.begin();
    it < _value.end(); ++it)
    {
      std::cout << *it << " ";
    }
    std::cout << std::endl;
  };

protected:
  FILE *file;
  std::vector<float> _value;
  unsigned int _comparison;
  inline void swap(float &a, float &b)
  {
    float c = a;
    a = b;
    b = c;
  }
  std::string _sortName;
  std::string getSortName() const
  {
    return (_sortName);
  };
};

#endif
