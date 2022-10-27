#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  list<int> l={1,2,3,4,5,6};
  list<int> l1={8,9,6,5};
  list<int>::iterator itr;
  itr=l.begin();
  advance(itr,3);
l.splice(itr,l1);
  for(int x:l){
          cout<<x<<endl;
  }
          return 0;
}