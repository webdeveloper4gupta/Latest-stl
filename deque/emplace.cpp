#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(12);
 d.emplace_front(3);
 d.emplace_back(67);
 cout<<d.back()<<endl;
 cout<<d.front()<<endl;
 
    return 0;
}