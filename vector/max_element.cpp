#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5};
    int k=*max_element(v.begin(),v.end());
    int k1=*min_element(v.begin(),v.end());
    cout<<k1<<endl;
    cout<<k<<endl;
    return 0;
}