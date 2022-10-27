#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  list<int> l={1,2,3,4,5};
  l.assign(8,51);
  for(int x:l){
 cout<<x<<endl;
  }
          return 0;
}