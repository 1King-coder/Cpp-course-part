#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int num{ 10 };
	int* pNum{ &num };

	std::cout << "Numero valor = " << num << "\n";
	std::cout << "Ponteiro valor = " << pNum << "\n";
	std::cout << "Numero endereço = " << &num << "\n";

	// The pointer has it's own address since it's a variable too
	// his difference is that it stores other variable's address as
	// it's value.
	std::cout << "Ponteiro endereço = " << &pNum << "\n";

	// Updates the value stored in the pointer's referencied address.
	*pNum *= 20;

	// So "num"'s value is updated.
	std::cout << "Numero valor = " << num << "\n";

	

	system("pause");
	return 0;
}