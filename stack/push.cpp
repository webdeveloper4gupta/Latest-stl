#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    stack<int> s;
    s.push(23);
    s.push(2);
    s.push(89);
    cout<<s.top()<<endl;
    return 0;
}