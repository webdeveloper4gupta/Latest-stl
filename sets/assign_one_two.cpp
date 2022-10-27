#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          set<int> s1 = {1, 2, 3, 4, 5, 6};
          set<int> s2(s1.begin(),s1.end());
          for(int x:s2){
                    cout<<x<<endl;
          }
          return 0;
}