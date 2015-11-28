#include "Sorter.hpp"

int
main(int argc, char **argv)
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
    d.deleteSort();
  }
  catch (const std::exception &e)
  {
    std::cout << e.what() << std::endl;
    return (1);
  }
  return (0);
}
