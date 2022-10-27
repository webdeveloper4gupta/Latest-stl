#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> l1={7,3,7,2,1};
    l1.sort();
    for(int x:l1){
          cout<<x<<endl;
    }
    return 0;
}