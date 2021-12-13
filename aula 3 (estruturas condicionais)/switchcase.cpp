#include <iostream>
#include <tchar.h>

int main (void)
{
  _tsetlocale(LC_ALL, _T("portuguese"));
  int bAccess;

  std::string AccessPassword = "programacaoevida";
  std::string TypedPassword;

  std::cout << "Type your access password: ";
  std::cin >> TypedPassword;

  bAccess = (TypedPassword == AccessPassword) ? 2 : 5;

  if (TypedPassword == "onehundredfive")
  {
    bAccess = 10;
  }

  switch (bAccess) // switch (value)
  {
    case 2: // if value == 2
      std::cout << "Access allowed!\n";
      break;

    case 5: // if value == 5
      std::cout << "Access Denied!\n";
      exit(0);
      break;
    
    default: // if value !2 && !5;
      std::cout << "Nothing happend!\n";
      break;
  }

  

  system("PAUSE");

  return 0;
}