#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          set<int> s = {1, 2, 3, 41, 5, 6};
          cout<<*s.lower_bound(2)<<endl;
          cout<<*s.upper_bound(3)<<endl;
          return 0;
}