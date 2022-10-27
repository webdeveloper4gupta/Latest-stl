#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l={1,2,3,4,5};
    list<int> l1={6,7,8,9};
    l.swap(l1);
    for(int x:l1){
          cout<<x<<endl;
    }
          return 0;
}