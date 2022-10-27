#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
          set<int> s = {1, 2, 3, 4, 5, 6};
          if(s.empty()){
                    cout<<"set is empty"<<endl;
          }
          else{
                    cout<<"s is not empty"<<endl;
          }
          return 0;
}