#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main()
{
    forward_list <int> l;
    l.push_front(1);
    l.push_front(2);
    
    cout<<l.front()<<endl;
    return 0;
}