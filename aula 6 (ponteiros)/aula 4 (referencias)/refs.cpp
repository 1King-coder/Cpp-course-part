#include <iostream>

int main()
{
  int number{ 1024 };
  int number2{ 2048 };

  // References is just a label; So References will have the same address as 
  // the variable it references
  // so Ref == number -> true
  // &Ref == &number -> true
  // Ref is a alias to number, it doesn't have a address it self cause it's
  // just a label to other variable
  int &Ref = number;

  std::cout << "Value of number using Ref: " << Ref << "\n";
  std::cout << "number address: " << &number << "\n";
  std::cout << "Ref address: " << &Ref << "\n";


  // you cannot change the Reference value
  // you can only modify a reference once.
  // &Ref = number2; -> will bring an error;

  int *ptr = &number;
  std::cout << "ptr address: " << &ptr << "\n";-




  system("pause");
  return 0;
}