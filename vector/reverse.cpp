#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6};
    reverse(v.begin(),v.end());
    for(int x:v){
          cout<<x<<endl;
    }
    return 0;
}