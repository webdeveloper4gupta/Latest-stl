#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
s.pop();
cout<<s.top()<<endl;
    return 0;
}