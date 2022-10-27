#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l={1,2,3,4,5,6};
    l.pop_front();
    l.pop_back();
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
          return 0;
}