/*Write a program that uses a while loop to reverse the digits of a given number. For example, if the 
input is 1234, the output should be 4321.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while (n>0)
    {
       int lastdigit=n%10;
       reverse=reverse*10 + lastdigit;
       n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}