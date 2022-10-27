#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={7,4,3,9,1,3};
//     sort in ascending order
    sort(v.begin(),v.end());
//     sort in descending order
sort(v.begin(),v.end(),greater<int>());
    unique(v.begin(),v.end());
//     unique(v.begin(),v.end());
      for(int x:v){
          cout<<x<<endl;
      }
    return 0;
}