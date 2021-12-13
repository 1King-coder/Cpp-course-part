#include <iostream>

class House
{
  private:
    int numRooms { 10 };
    float size;
    bool bHasSuite;
  
  public:
    void showSize();
    int getRoomNum();
    bool hasSuite();

};


int main ()
{
  House house;
  std::cout << house.getRoomNum();

  return 0;
}

void House::showSize()
{
  std::cout << "\nSize: " << size << "\n";
}

int House::getRoomNum()
{
  return numRooms;
}

bool House::hasSuite()
{
  return bHasSuite;
}