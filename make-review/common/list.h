#ifndef LIST_H
#define LIST_H
#include <vector>
class MyList
{
 public:
  MyList();
  void insert(int loc, int val);
  int& get(int loc);
  void remove(int loc);
  unsigned int size();
 private:
  std::vector<int> _list;
};
#endif
