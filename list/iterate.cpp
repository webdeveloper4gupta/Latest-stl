#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
list<int> l={1,2,3,4,5,6};
list<int>::iterator itr;
for(itr=l.begin();itr!=l.end();itr++){
   cout<<*itr<<endl;
}
          return 0;
}