#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

  int Number{ 234 };
  int *Pointer{ &Number };

  *Pointer = 1456;

  cout << "\n";

  cout << "\033[1mNumber\033[m \033[1;35mvalue\033[m:\033[1;36m " << *Pointer << "\033[m\n\n";
  cout << "\033[1mPointer\033[m \033[1;33maddress\033[m: \033[1;32m" << &Pointer << "\033[m\n";
  cout << "\033[1mNumber\033[m \033[1;33maddress\033[m: \033[1;32m" << &Number << "\033[m\n";
  cout << "\033[1mPointer\033[m \033[1;35mvalue\033[m: \033[1;36m" << Pointer << "\033[m\n\n";

  int *OtherPointer;

  OtherPointer = Pointer;
  
  *Pointer += 200;

  cout << "\033[1mNumber\033[m \033[1;35mvalue\033[m:\033[1;36m " << *OtherPointer << "\033[m\n";
  cout << "\033[1mOtherPointer\033[m \033[1;35mvalue\033[m:\033[1;36m " << OtherPointer << "\033[m\n\n";

  cout << "\n";

	system("pause");
	return 0;
}