#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
    deque<int>d={1,2,3,4,5,6};
      if(d.empty()){
          cout<<"deque is empty"<<endl;
      }
      else{
          cout<<"deque is not empty"<<endl;
      }
    return 0;
}