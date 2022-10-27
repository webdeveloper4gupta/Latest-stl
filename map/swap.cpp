#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
          map<int, int> m1;
          m1[1] = 0;
          m1[21] = 1;
          m1[3] = 2;
          m1[4] = 3;
          map<int,int> m2;
          m2[4]=2;
          m2[5]=3;
          m2[6]=1;
          m1.swap(m2);
          for(auto x:m2){
                    cout<<x.first<<endl;
          }

          return 0;
}