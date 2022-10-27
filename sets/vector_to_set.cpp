#include <iostream>
#include <set>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
          vector<int> v={1,2,3,4,5,6,7,8,5,4,3,1};
          set<int> s(v.begin(),v.end());
//           for(int x:s){
//                     cout<<x<<endl;
// }
          set<int>::iterator itr;
//          v.assign(s.begin(),s.end());
//         vector<int> v1(s.begin(),s.end());

         for(int x:v1){
          cout<<x<<endl;
         }
          return 0;
}