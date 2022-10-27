#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    return 0;
}