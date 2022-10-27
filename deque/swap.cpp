#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5,6};
    deque<int> d1={8,9,7};
    d1.swap(d);
    for(int x:d){
          cout<<x<<endl;
    }
    return 0;
}