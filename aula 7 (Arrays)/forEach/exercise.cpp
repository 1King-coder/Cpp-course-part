#include <iostream>


int main()
{
  float Array[] { 70.9f, 89.5f, 65.6f, 102.5f, 123.6f, 63.4f,
                74.5f ,99.5f, 68.7f }; 
  int size { sizeof(Array) / sizeof(Array[0]) };
  float average { 0.0f };

  for (auto number : Array)
  {
    average += number;
  }
  average /= size;

  std::printf("The average is %.2f\n", average);

  system("pause");
  return 0;
}
