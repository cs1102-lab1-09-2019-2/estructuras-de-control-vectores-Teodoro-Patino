/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    for(x=1;x<=7;x++)
    {
        for(y=1;y<=x;y++)
        {
            cout<<y;
        }
        for(;y<=7;y++)
        {
            cout<<"*";
        }

        cout<<endl;
    }


}