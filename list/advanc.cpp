#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
list<int> l={1,2,3,4,5};
list<int>::iterator itr;
itr=l.begin();
advance(itr,2);
  l.insert(itr,1,21);
 for(int x:l){
          cout<<x<<endl;
 }
          return 0;
}