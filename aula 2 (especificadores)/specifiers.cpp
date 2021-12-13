#include <iostream>
#include <tchar.h>


int main (void)
{
  // Allows the accentuation
  _tsetlocale(LC_ALL, _T("portuguese"));

  // for Variable value inicialization uses { value }.
  int IntegerNum { 71 };
  float FloatNum { 92.154 };
  char Character { 'c' };
  std::string Text { "Just some string text" };

  /*
  printf -> print formated;
  (%d , %d, %d)

  %d -> Integer
  %f -> Float
  %lf -> Long Float
  %c -> Character
  %s -> Character sequence (string)
  %% -> %

  OBS.: %.0f -> in "0" we specify the amount of numbers after the ,
  */

  std::printf("Integer value: %d\n", IntegerNum);
  std::printf("Float value: %.3f\n", FloatNum);
  std::printf("Character value: %c\n", Character);

  // To print a string, we'll need to use "c_str()" from the string cls inherited by Text.
  std::printf("String value: %s\n", Text.c_str());

  // With "cout" we don't need to call "c_str"
  std::cout << "String value (cout): " << Text << std::endl;

  // if we use %d for a character, it will return it's integer representation in the ASCII table
  std::printf("Character value (ASCII int): %d\n", Character);
  // and if we use %c for a integer, it will return it's character representation in th ASCII table.
  std::printf("Character value (ASCII): %c\n", 99);


  return 0;
}