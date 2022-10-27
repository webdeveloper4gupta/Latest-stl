#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    stack<int> s;
    int i;
    int n;
//     for(i=0;i<5;i++){
//       cin>>n;
//       s.push(n);
//     }
    if(s.empty())
    {
          cout<<"stack is empty"<<endl;
    }
    else{
          cout<<"stack is not empty"<<endl;
    }
    return 0;
}