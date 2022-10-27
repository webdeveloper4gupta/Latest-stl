// to swap two given array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
    vector<int> v1={4,5,6}; 
    v1.swap(v);
    for(int x:v){
          cout<<x<<endl;
    }
    return 0;
}