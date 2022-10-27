#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main()
{
    forward_list<int> f={1,2,3,3,4,5,6,7,9,5,7,7,2};
    f.sort();
    f.unique();
  for(int x:f){
          cout<<x<<endl;
  }
    return 0;
}