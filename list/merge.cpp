#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
list<int> l1={1,2,3,4,5};
list<int> l2={6,7,8,9,10};
l1.merge(l2);
for(int x:l1){
          cout<<x<<endl;
}
          return 0;
}