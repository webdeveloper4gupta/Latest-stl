#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int> d={1,2,3,4,5,6};
    d.clear();
    for(int x:d){
          cout<<x<<endl;
    }
    cout<<"welcome to code world"<<endl;
    return 0;
}