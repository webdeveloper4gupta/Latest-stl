#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
//     here i explain you how to insert at first position
// in the list indexation is not valid
    list<int> l={1,2,3,4};
    l.push_front(2);
    for(int x:l){
          cout<<x<<endl;
    }
    l.push_back(23);
    cout<<l.back()<<endl;
 
    return 0;
}