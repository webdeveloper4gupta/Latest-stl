#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          set<int> s = {1, 2, 3, 4, 5, 6};
          s.erase(2);
          for(int x:s){
                    cout<<x<<endl;
          }
          return 0;
}