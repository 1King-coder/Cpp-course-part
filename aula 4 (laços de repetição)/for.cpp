#include <iostream>
#include <tchar.h>

int main (void)
{
  _tsetlocale(LC_ALL, _T("portuguese"));

  int last { 0 }, sum { 0 }, actual { 1 }, index { 0 };
  
  for (index = 0; index < 14; index++)
  {
    std::cout << sum << " ";
    sum = last + actual;
    last = actual;
    actual = sum;
  }

  return 0;
}