#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<int> s={1,2,3,4,5,6};
    cout<<s.max_size()<<endl;
    return 0;
}