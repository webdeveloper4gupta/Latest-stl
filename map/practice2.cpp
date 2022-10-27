#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    map<string,int> m;
    string s;
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
          cin>>s;
          m[s]++;
    }
    for(auto x:m){
          cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}