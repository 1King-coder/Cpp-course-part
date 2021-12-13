#include <iostream>

// With * we say that the function will receive pointers
// that's, it will receive addresses
void switchNumbers(int *num1, int *num2);

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
  
  switchNumbers(&num1, &num2);

  cout << "-----After-----\n";

  cout << "Number 1 = " << num1 << "\n"
       << "Number 2 = " << num2 << "\n";

  system("pause");
  return 0;
}

void switchNumbers(int *num1, int *num2)
{
  // now num1 and num2 are pointers (with addresses as values)
  // so they'll need to be unreferenced;
  int temp{ *num1 };

  *num1 = *num2;
  *num2 = temp;
}