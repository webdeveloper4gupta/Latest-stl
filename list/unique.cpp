#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
list<int> l={1,2,3,4,5,2,6,4,3,1,9,8,3};
l.sort();
l.unique();
for(int x:l){
          cout<<x<<endl;

}
          return 0;
}