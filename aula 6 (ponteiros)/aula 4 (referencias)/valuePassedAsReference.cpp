#include <iostream>

// When using "&" we are saying that it's to use the
// respective passed argument not a copy of it.
// It happens because we said they'll be references
// so they'll be the same as the argument passed.
// So the addresses will be the same;
void switchNumbers(int &num1, int &num2);

using namespace std;
int main ()
{
  int num1, num2;
  setlocale(LC_ALL, "portuguese");

  cout << "Enter a number: ";
  cin >> num1;
  cout << "Enter another number: ";
  cin >> num2;

  cout << "-----Before-----\n";

  cout << "Number 1 = " << num1 << "\n"
       << "Number 2 = " << num2 << "\n";
  
  switchNumbers(num1, num2);

  cout << "-----After-----\n";

  cout << "Number 1 = " << num1 << "\n"
       << "Number 2 = " << num2 << "\n";

  system("pause");
  return 0;
}

void switchNumbers(int &num1, int &num2)
{
  int temp{ num1 };

  num1 = num2;
  num2 = temp;
}