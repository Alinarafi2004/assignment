/*Create a function that uses nested for loops to print the following
pattern for n rows:
1
1 2
1 2 3
1 2 3 4 */
#include<iostream>
using namespace std;
int main(){
     for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}