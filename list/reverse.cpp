#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
list<int> l={1,2,3,4,5,6};
l.reverse();
for(int x:l){
          cout<<x<<endl;
}
          return 0;
}