#include <iostream>
#include <tchar.h>

int main (void)
{
  _tsetlocale(LC_ALL, _T("portuguese"));
  // A boolean in c++ is 0 or 1, beeing 0 for false and 1 for true.

  // 0 will always be false, while any other value will be always true.
  // OBS: NULL and others value like it will be interpreted as false too.
  bool bAccess;

  std::string AccessPassword = "programacaoevida";
  std::string TypedPassword;

  std::cout << "Type your access password: ";
  std::cin >> TypedPassword;

  bAccess = TypedPassword == AccessPassword;

  if (bAccess)
  {
    std::cout << "Access allowed!\n";
  } 
  else 
  {
    std::cout << "Access denied!\n";
    exit(0); // Force the program to close;
  }

  system("PAUSE");

  return 0;
}