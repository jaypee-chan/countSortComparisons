#include "Sorter.hpp"

int main(int argc, char **argv)
{
  if (argc <= 1)
  {
    std::cout << "File not found." << std::endl;
    return (1);
  }
  try
  {
    Sorter d(argv[1]);
    d.stockVector();
    d.initSort();
    d.launchBenchmark();
  }
  catch (char const *e)
  {
    std::cerr << e;
    return (1);
  }
  return (0);
}
