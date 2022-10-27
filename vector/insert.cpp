#include<iostream>
#include<vector>
using namespace std;
// insert at any position in vector
int main()
{
    vector<int> v={1,2,3,4,5,6,7};
       v.insert(v.end()-3,23);
       for(int x:v){
          cout<<x<<endl;
       }
    return 0;
}
