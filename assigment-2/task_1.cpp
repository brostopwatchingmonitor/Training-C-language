//
// Created by alif on 10/9/25.
//

#include "task_1.h"
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<"Numbers a = "<<a<<" greater than b = "<<b<<" & c = "<<c;
    }else if(b>a && b>c)
    {
        cout<<"Numbers b = "<<b<<" greater than a = "<<a<<" & c = "<<c;
    }else
    {
        cout<<"Numbers c = "<<c<<" greater than a = "<<a<<" & b = "<<b;
    }
}