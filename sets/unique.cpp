#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<int> s={1,2,3,4,5};
    s.insert(5);
    s.insert(78);
//     s[0]=90;

    s.insert(34);
    for(int x:s){
          cout<<x<<endl;
    }
    return 0;
}