#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6};
    vector<int> v1={9,3,5,1,2,4,5};
    vector<int> v3(v.size()+v1.size());
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    merge(v.begin(),v.end(),v1.begin(),v1.end(),v3.begin());
    for(int x:v3){
          cout<<x<<endl;
    }
    return 0;
}