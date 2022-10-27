#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> f={1,2,3};
    f.insert_after(f.begin(),3);
for(int x:f){
          cout<<x<<endl;
}
    return 0;
}