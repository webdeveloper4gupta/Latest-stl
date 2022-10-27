#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          
          int arr[]={1,2,3};
           set<int>s(arr,arr+3);
           for(int x:s){
                    cout<<x<<endl;
           }
          return 0;
}