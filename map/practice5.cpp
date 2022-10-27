#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,4,6,2,1,2,2,2,4};
    map<int,int>m;
    map<int,int>m1;
    for(int x:v){
          m[x]++;
    }
    for(auto x:m){
          if(x.first==2){
                    m[x.first]--;
                    
          }
    }
    for(auto x:m){
          cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}