#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
     v.clear();
     for(int x:v){
          cout<<x<<endl;
     }
     cout<<"welcome to code world"<<endl;
    return 0;
}