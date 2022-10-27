// this we used to find what present in the given index
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
    auto k= v.at(2);
     cout<<k<<endl;
     cout<<v[0]<<endl;
    return 0;
}