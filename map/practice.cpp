// count the frequency of each elemnt
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    map<int,int> m;
    int arr[]={1,2,4,6,3,2,1,8,6,8,1};
    int i;
    for(i=0;i<11;i++){
       m[arr[i]]++;
    }
    for(auto x:m){
          cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}