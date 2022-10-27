#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l={1,2,3,4};
    if(l.empty()){
          cout<<"list is empty"<<endl;
    }
    else{
          cout<<"list is not empty"<<endl;
    }
          return 0;
}