#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    stack<int>s1;
    s1.push(4);
    s1.push(89);
    s1.swap(s);
     cout<<s.top()<<endl;
    return 0;
}