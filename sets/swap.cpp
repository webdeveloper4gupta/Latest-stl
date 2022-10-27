#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          set<int> s = {1, 2, 3, 4, 5, 6};
          set<int> s1={8,9,6};
          s.swap(s1);
          for(int x:s1){
                    cout<<x<<endl;
          }
          return 0;
}