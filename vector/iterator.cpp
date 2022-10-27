#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4};
    vector<int>::iterator itr;
    itr=v.begin();
    cout<<*itr<<endl;
    
    return 0;
}