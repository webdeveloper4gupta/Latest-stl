#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          set<int> s = {1, 2, 31, 4, 5, 6};
          cout<<s.count(3)<<endl;
          return 0;
}