/*Write a program that uses a nested for loop to print a pattern like
this for n rows:
*
**
***
**** */
#include<iostream>
using namespace std;
int main(){ 
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}