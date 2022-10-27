#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,1,1};
    cout<<count(v.begin(),v.end(),3)<<endl;
    return 0;
}