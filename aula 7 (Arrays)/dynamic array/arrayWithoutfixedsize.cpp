#include <iostream>
// import vector module
#include <vector>

int main()
{
  // std::vector < type > name; 
  // optional ...name (size);
  std::vector < int > dynamicVector { 1, 2, 3, 5 };

  

  std::cout << "dynamic array (before):\n [ ";
  for (int num : dynamicVector)
  {
    std::cout << num << " ";
  }
  std::cout << "]\n";

  // Add 10 in the end of the vector
  dynamicVector.push_back(10);
  // (1, 2, 3, 5, 10)

  for (int i = 1; i < 21; i++)
  {
    dynamicVector.push_back(i);
  }

  std::cout << "dynamic array (after):\n [ ";

  for (int num : dynamicVector)
  {
    std::cout << num << " ";
  }
  std::cout << "]\n";


  system("pause");
  return 0;
}
