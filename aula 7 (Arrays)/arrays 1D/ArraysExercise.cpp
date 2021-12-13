#include <iostream>

void doubleArray (int *Array, int size);

void showArray (int *Array, int size);

int* invertArray (int *Array, int size);

int main ()
{ 
  int numArr[] { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
  int numArrSize { sizeof(numArr) / sizeof(int) };
  int *invertedArray { invertArray(numArr, numArrSize) };

  std::cout << &numArr[0] << "\n";

  showArray(numArr, numArrSize);

  showArray(invertedArray, numArrSize);

  doubleArray(numArr, numArrSize);

  showArray(numArr, numArrSize);

  doubleArray(invertedArray, numArrSize);

  showArray(invertedArray, numArrSize);

  return 0; 
}

void doubleArray (int *Array, int size)
{
  for (int i = 0; i < size; i++)
  {
    Array[i] *= 2;
  }
  
}

void showArray (int *Array, int size)
{
  std::cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    std::cout << Array[i] << " ";
  }
  std::cout << "]\n\n";
}

int *invertArray (int *Array, int size)
{
  static int invertedArray[10];
  for (int i { size - 1 }, j { 0 } ; i >= 0; i--, j++)
  {
    invertedArray[j] = Array[i];
  }

  return &invertedArray[0];
}