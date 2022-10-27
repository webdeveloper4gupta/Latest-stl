#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int>d={1,2,3,4,5,6};
    d.insert(d.begin()+2,2);
    for(int x:d){

          cout<<x<<endl;
    }
    return 0;
}