#ifndef SELECTION_HPP_
# define SELECTION_HPP_

#include "ASorting.hpp"

class Selection : public ASorting
{
public:
  Selection(std::vector<float> val);
  ~Selection() {};
  void sorting();
private:
  
};

#endif
