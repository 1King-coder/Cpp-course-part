#include <iostream>

class House
{
  private:
    int numRooms { 0 };
    float size { 20.3f };
    bool bHasSuite;
  
  public:
    void showSize();
    int getRoomNum();
    bool hasSuite();
    void setNumRooms(int numOfRooms);
};


int main ()
{
  // now it's a pointer.
  House *beachHouse { new House() };

  //So to use the "." notation we need to first
  // unreference the object:
  (*beachHouse).showSize();

  // but, there is a better way to do it
  // that is, using the arrow ("->") notation:
  beachHouse->showSize();

  beachHouse->setNumRooms(5);

  std::cout << "Number of rooms: "<< beachHouse->getRoomNum() << "\n";

  return 0;
}

void House::showSize()
{
  std::cout << "\nSize: " << size << "\n";
}

void House::setNumRooms(int numOfRooms)
{
  if (numOfRooms > 6 || numOfRooms < 0)
  {
    std::cout << "invalid number of rooms.\n";
    return;
  }

  numRooms = numOfRooms;
}

int House::getRoomNum()
{
  return numRooms;
}

bool House::hasSuite()
{
  return bHasSuite;
}