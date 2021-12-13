#include <iostream>


class SuperClassA
{
public:
  int superClassInt { 4 };
  void showClassInt(int classInt)
  {
    std::cout << "class int = " << classInt << "\n";
  };
  // constructor
  SuperClassA() : superClassInt(4){}
};

// the way to make a subclass inherit things from another class
// in cpp is:
// class DerivedClassName : LevelOfAccess BaseClassName {};

class SubClassB : public SuperClassA
{
public:
  int subClassBInt { superClassInt + 1 };
};

int main()
{
  SubClassB *subClass{ new SubClassB() };
  SuperClassA *superClass{ new SuperClassA() };

  superClass->showClassInt(superClass->superClassInt);

  subClass->showClassInt(subClass->subClassBInt);

  return 0;
}