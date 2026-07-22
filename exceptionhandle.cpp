#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    try
    {
       float a=10.0;
       float b=0.0;
        cout<<a/b;
    }
    catch(const exception& error)
    {
        cout<<"error"<<error.what();
    }
}