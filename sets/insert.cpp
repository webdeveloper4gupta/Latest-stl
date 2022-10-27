#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<int> d={1,2,3,4,5,6};
    d.insert(34);//insert element at first position
//     cout<<d.front()<<endl;
for(int x:d){
          cout<<x<<endl;
}
    return 0;
}