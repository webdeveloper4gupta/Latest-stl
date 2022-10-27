#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,4};
    cout<<v.size()<<endl;
    v.resize(12);
    cout<<v.size()<<endl;
    
    return 0;
}