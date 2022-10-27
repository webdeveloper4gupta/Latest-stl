#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
          map<int, int> m1;
          m1[1] = 0;
          m1[2] = 1;
          m1[3] = 2;
          m1[4] = 3;
         m1.erase(1);
         m1.erase(m1.begin());
         for(auto x:m1){
          cout<<x.first<<" "<<x.second<<endl;
         }
}