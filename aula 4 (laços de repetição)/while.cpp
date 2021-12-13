#include <iostream>
#include <tchar.h>

int main (void)
{
  _tsetlocale(LC_ALL, _T("portuguese"));

  int last { 0 }, sum { 0 }, actual { 1 }, index { 0 };
  
  while (index <= 15)
  {
    std::cout << sum << " ";
    sum = last + actual;
    last = actual;
    actual = sum;
    index++;
  }
  std::cout << "\n";

  last = 0;
  sum = 0;
  actual = 0;

  // do at least one iteration 'cause the condition is verified only after the iteration
  do
  {
    std::cout << sum << " ";
    sum = last + actual;
    last = actual;
    actual = sum;
    index++;
  } while (index <= 15);
  
    
  

  return 0;
}