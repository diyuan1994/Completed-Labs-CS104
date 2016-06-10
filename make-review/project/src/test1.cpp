#include <iostream>
#include "foo.h"
using namespace std;


int main()
{
  Foo myfoo(4.5, 3);
  cout << myfoo.f << " " << myfoo.fb.b << endl;
  return 0;
}
