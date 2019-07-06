#include "gc_pointer.h"
#include "LeakTester.h"
#include <iostream>
using namespace std;
int main()
{
    Pointer<int> p = new int(19);
    cout<<*p<<endl;
     Pointer<int> x = new int(20);
     //test case for = operator for 2 Pointer classes
     p=x;
       cout<<*p<<endl;
    cout<<"---------------------"<<endl;
    p = new int(21);
    p = new int(28);
    //test case for the array 
   Pointer<int,5> s = new int[5];
    for (int i = 0; i < 5; i++)
    {
        s[i] = i*i;
    }
     for (int i = 0; i < 5; i++)
    {
       cout<<s[i]<<endl;
    }
    
    p.showlist();
    cout<<p.refContainerSize()<<endl;

    return 0;
}