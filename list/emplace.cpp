#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
list<int>l={1,2,3};
l.emplace(l.begin(),2);
for(int x:l){
          cout<<x<<endl;
}
          return 0;
}