#include "Sorter.hpp"

Sorter::Sorter(const char *filename) : _filename(filename), _elems(0)
{
}

void
Sorter::initSort()
{
  _sort.push_back(new Selection(_valList));
  _sort.push_back(new Insertion(_valList));
  _sort.push_back(new Bubble(_valList));
  _sort.push_back(new Merge(_valList));
  _sort.push_back(new Quick(_valList));
}

void
Sorter::deleteSort()
{
  std::size_t len = _sort.size();

  for (std::size_t i = 0; i < len; ++i) {
    _sort.erase(_sort.begin());
  }
}

void
Sorter::launchBenchmark() const
{
  std::cout << _elems << " elements" << std::endl;

  for (std::vector<ASorting *>::const_iterator it = _sort.begin(); it != _sort.end(); ++it) {
    (*it)->sorting();
    (*it)->displayComparisons();
    (*it)->displaySort();
  }
}

bool
Sorter::isFloat(std::string str)
{
  std::istringstream iss(str);
  float f;
  iss >> std::noskipws >> f;
  return iss.eof() && !iss.fail();
}

void
Sorter::stockVector()
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
