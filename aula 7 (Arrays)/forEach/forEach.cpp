#include <iostream>

int main()
{
  int numArr[] { 1, 10, 100, 100 };

  // for element (type name) in (:) array
  // "auto" means that the program will identify
  // it's type automaticaly;
  for (auto Number : numArr)
  {
    std::cout << Number << " ";
  }
  system("pause");

  return 0;
}