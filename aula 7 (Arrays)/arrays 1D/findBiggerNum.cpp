#include <iostream>



int main ()
{
  int i { 0 };
  double numArr[5] { 0, 0, 0, 0, 0 };
  int arrLength { std::size(numArr) };
  double bigger { 0 }, smaller { 0 };

  for (i = 0; i < arrLength; i++)
  {
    std::cout << "Enter with a number: ";
    std::cin >> numArr[i];
  }

  smaller = numArr[0];

  for (i = 0; i < sizeof(numArr) / sizeof(numArr[0]); i++)
  {
    if (numArr[i] > bigger)
    {
      bigger = numArr[i];
    }
    if (numArr[i] < smaller)
    {
      smaller = numArr[i];
    }
  }

  std::cout << "Biggest number: " << bigger << "\n"
            << "Smallest number: " << smaller << "\n";


  return 0; 
}
