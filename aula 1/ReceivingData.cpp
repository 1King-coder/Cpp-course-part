#include <iostream>
#include <tchar.h>

using namespace std;

int main(void) 
{
  // int number1, number2;

  // cout << "Type the first number: " << endl;
  // cin >> number1;
  // cout << "Type the second number: " << endl;
  // cin >> number2;

  // cout << "The sum between " << number1 << " and " << number2
  // << " is " << number1 + number2 << endl;
  _tsetlocale(LC_ALL, _T("portuguese"));
  
  int numberQtd;
  double numberReceived, sum { 0 };

  cout << "How many numbers do you want to enter? ";
  cin >> numberQtd;

  for (int i = 0; i < numberQtd; i++)
  {
    cout << "Enter with the " << i+1 << "º number: ";
    cin >> numberReceived;
    sum += numberReceived;
  }

  cout << "The total sum is " << sum;
  

  return 0;
}