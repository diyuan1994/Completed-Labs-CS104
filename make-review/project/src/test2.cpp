#include <iostream>
#include "list.h"
#include "bar.h"

using namespace std;

int main()
{

  Bar mybar(6);
  MyList m;
  m.insert(0, 100);
  m.get(0) = 200;
  cout << mybar.b << endl;
  cout << m.get(0) << endl;
  m.remove(0);
  return 0;
}
