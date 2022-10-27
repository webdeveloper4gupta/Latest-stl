#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          set<int> s = {1, 2, 3, 41, 5, 69};
          cout<<*s.find(4)<<endl;
          return 0;
}