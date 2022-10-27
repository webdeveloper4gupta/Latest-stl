#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.emplace(2);
    cout<<s.top()<<endl;
    return 0;
}