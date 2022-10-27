#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6};
    auto k=find(v.begin(),v.end(),6);
    cout<<*k<<endl;
    return 0;
}