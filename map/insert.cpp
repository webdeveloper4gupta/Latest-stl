#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    map<int,int>m;
  m[1]=0;
  m[2]=1;
  pair<int,int>p=make_pair(10,2);
  m.insert(p);
  for(auto x:m){
          cout<<x.first<<endl;
  }
    return 0;
}