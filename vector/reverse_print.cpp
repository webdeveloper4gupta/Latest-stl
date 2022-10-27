#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6};
    vector<int>::iterator itr;
    for(itr=v.end();itr!=v.begin()-1;itr--){
          cout<<*itr<<endl;
    }
    return 0;
}