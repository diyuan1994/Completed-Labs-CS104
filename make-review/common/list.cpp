#include "list.h"


MyList::MyList()
{ }

void MyList::insert(int loc, int val)
{
  _list.insert(_list.begin()+loc, val);
}
int& MyList::get(int loc)
{
  return _list[loc];
}
void MyList::remove(int loc)
{
  _list.erase(_list.begin() + loc);
}
unsigned int MyList::size()
{
  return _list.size();
}



