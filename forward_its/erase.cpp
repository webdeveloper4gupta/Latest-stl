#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> f={1,2,3,4,5,6};
    f.erase_after(f.begin());
    for(int x:f){
          cout<<x<<endl;
    }
    return 0;
}