// delete at any position
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
    v.erase(v.begin()+2);v.erase(v.end()-2);
    
    for(int x:v){
          cout<<x<<endl;
    }
    return 0;
}