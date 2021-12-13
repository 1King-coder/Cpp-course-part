#include <iostream>

int main ()
{

  float grade[5] { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
  float average { 0.0f };
  int arrLength { sizeof(grade)/ sizeof(grade[0]) };
  std::string StudentName;

  std::cout << "Enter with the student's name: ";
  std::cin >> StudentName;

  // The arrays size divided by the size of any element 
  // will always be it's length.
  for (int i = 0; i < arrLength; i++)
  {
    std::cout << "Enter the student's " << i+1 << " grade: ";
    std::cin >> grade[i];

    average += grade[i];
  } 

  std::cout << "Student's " << StudentName 
            << " average is " << average / arrLength << "\n";

  return 0; 
}