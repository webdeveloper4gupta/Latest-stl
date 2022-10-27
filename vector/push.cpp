#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,6};
    v.push_back(12);
    int i;
    for(i=0;i<v.size();i++){
          cout<<v[i]<<endl;
    }

    return 0;
}