#include <iostream>

// Because the sum function is created just after it's called,
// it'll bring us an error so we declare it before.
// it's called prototype func.
float sum (float num1, float num2);

int main ()
{
  std::cout << sum(700, 300) << std::endl;
  system("Pause");
  return 0;
}

float sum (float num1, float num2)
{
  return num1 + num2;
}