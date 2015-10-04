#include "Sorter.hpp"

Sorter::Sorter(const char *filename) : _filename(filename), _elems(0)
{
}

void Sorter::initSort()
{
  this->_sort[0] = new Selection(_valList);
  this->_sort[1] = new Insertion(_valList);
  this->_sort[2] = new Bubble(_valList);
  this->_sort[3] = new Merge(_valList);
  this->_sort[4] = new Quick(_valList);
}

void Sorter::deleteSort()
{
  delete this->_sort[0];
  delete this->_sort[1];
  delete this->_sort[2];
  delete this->_sort[3];
  delete this->_sort[4];
}

void Sorter::launchBenchmark()
{
  std::cout << _elems << " elements" << std::endl;

  for (size_t i = 0; i < 5; i++)
  {
    this->_sort[i]->sorting();
    this->_sort[i]->displayComparisons();
    this->_sort[i]->displaySort();
  }
}

bool Sorter::isFloat(std::string str)
{
  std::istringstream iss(str);
  float f;
  iss >> std::noskipws >> f;
  return iss.eof() && !iss.fail();
}

void Sorter::stockVector()
{
  std::ifstream file(this->_filename.c_str());
  float v;

  if (!(file) || file.eof())
    throw ExceptionFile("Could not open the file.");
  std::string tmp;
  while (file >> tmp)
  {
    ++this->_elems;
    if (tmp != "")
    {
      if (isFloat(tmp) == false)
        throw ExceptionConvert("Could not convert to float.");
      v = atof(tmp.c_str());
      this->_valList.push_back(v);
    }
  }
}
