#include <iostream>
#include <vector>

int main ()
{
  // When using std::vector and want to give it to a pointer,
  // you'll need to explicitly reference it as &VectorName[0].
  // Ex.:
  // std::vector < int > Numbers { 1, 23, -78, 900, 234 };
  // int *pNumbers { &Numbers[0] };

  int Numbers[] { 1, 23, -78, 900, 234 };
  int *pNumbers = Numbers;
  int i { 0 };

  for (i; i < 5; i++, pNumbers++)
  {
    std::cout << "Array [" << i << "]: " << "\n\tAddress: " << pNumbers
              << "\n\tValue: " << *pNumbers << "\n";
    // can increment here or together with "i"
    // pNumbers++;
  }

  // BE AWARE ended with "ptr + 5" out of the array. (&array[size + 1])
  std::cout << pNumbers << "\n";

  // reset
  pNumbers -= i;

  // returned to the first element (&array[0])
  std::cout << pNumbers << "\n";


  return 0;
}