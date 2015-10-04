#ifndef SORTER_HPP_
# define SORTER_HPP_

#include <cstdlib>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
#include "Insertion.hpp"
#include "Selection.hpp"
#include "Bubble.hpp"
#include "Merge.hpp"
#include "Quick.hpp"
#include "Exception.hpp"

class Sorter
{
public:
  Sorter(const char *filename);
  ~Sorter() {};
  void stockVector();
  void launchBenchmark();
  void initSort();

private:
  bool isFloat(std::string str);

  std::string _filename;
  std::vector<float> _valList;
  unsigned int _elems;
  ASorting *_sort[5];
};

#endif
