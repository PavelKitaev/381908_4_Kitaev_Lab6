#include <iostream>
#include "TArrayList.h"

int main()
{
  TArrayList<char> temp(10);
  temp.InsFirst('a');
  temp.InsLast('b');
  temp.InsFirst('c');

  TArrayListIterator<char> i = temp.Begin();
  while (i.IsGoNext())
  {
    cout << i.GetData();
    i.GoNext();
  }

  cout << temp << "\n";
  return 0;
}
