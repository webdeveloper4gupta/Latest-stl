#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  list<int> l={1,2,3,4,5,6,2,2};
  l.remove(2);
  for(auto x:l){
  cout<<x<<endl;
  }
          return 0;
}