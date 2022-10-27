#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5};
    d.push_front(23);
    d.erase(d.begin());
    for(int x:d){
          cout<<x<<endl;
    }
    return 0;
}