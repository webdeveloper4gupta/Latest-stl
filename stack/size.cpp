#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    cout<<s.size()<<endl;
    s.push(3);
    cout<<s.size()<<endl;
    return 0;
}