#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int> d;
    d={1,2,3,4};
    d.pop_back();
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    return 0;
}