#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int num{ 10 };
	char letter{ 'E' };

  // Used when you don't know the data type it'll receive.
  void* pGeneric{nullptr};

  pGeneric = &letter;
  // To use the pointer you need to tell the compiler the data type
  // before using it. It need to be done because the address is
  // only the first byte in the memory, so with the data type, the
  // compiler will be able to fully understand how many bytes to read.
  cout << "pGeneric value = " << *(char*)pGeneric << "\n";
	
  pGeneric = &num;
  // (datatype*) is the casting for the pointer, in other words
  // it tells the compiler tha "pGeneric" must be read as a datatype.
  cout << "pGeneric value = " << *(int*)pGeneric << "\n";

	system("pause");
	return 0;
}