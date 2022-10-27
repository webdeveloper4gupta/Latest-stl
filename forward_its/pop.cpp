#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> l={1,2,3,4,5,6};
    l.pop_front();
    for(int x:l){
          cout<<x<<endl;
    }
    return 0;
}