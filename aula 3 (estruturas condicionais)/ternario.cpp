#include <iostream>
#include <tchar.h>

int main (void)
{
  _tsetlocale(LC_ALL, _T("portuguese"));
  bool bAccess;

  std::string AccessPassword = "programacaoevida";
  std::string TypedPassword;

  std::cout << "Type your access password: ";
  std::cin >> TypedPassword;

  bAccess = TypedPassword == AccessPassword;

  // ternary structure is: (conditional) ? (true) : (false);

  (bAccess) ? (
    std::cout << "Access allowed!\n"
  ) : (
    std::cout << "Access denied!\n"
  );

  system("PAUSE");

  return 0;
}