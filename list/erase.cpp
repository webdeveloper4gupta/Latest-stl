#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
list<int> l={1,2,3,4};
list<int>::iterator it;
it=l.begin();
advance(it,2);
l.erase(it);
for(int x:l){
          cout<<x<<endl;
}

          return 0;
}