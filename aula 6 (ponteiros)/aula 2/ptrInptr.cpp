#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int num{ 10 };
	int* pNum{ &num };
	int* ptr;

	// ptr == pNum -> now ptr has &num too
	ptr = pNum;

	std::cout << "ptr value = " << ptr << "\n";
	std::cout << "pNum value = " << pNum << "\n";
	std::cout << "ptr address = " << &ptr << "\n";
	std::cout << "pNum address = " << &pNum << "\n";

	std::cout << "num value = " << num << "\n";
	std::cout << "*ptr value = " << *ptr << "\n";
	std::cout << "*pNum value = " << *pNum << "\n";

	// *ptr -> num; *pNum -> num; ptr -> &num;
	*ptr = (*pNum + 12);
	// same as num += 12; so num had it's value updated;

	std::cout << "num value = " << num << "\n";
	system("pause");
	return 0;
}