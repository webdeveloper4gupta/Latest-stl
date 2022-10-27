#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
    if(v.empty()){
          cout<<"empty"<<endl;
    }
    else{
          cout<<"not full"<<endl;
    }
    return 0;
}