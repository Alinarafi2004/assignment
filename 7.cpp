//write a function that takes an integer array and its size and finds the second
//largest element in the array.
#include<iostream>
#include<climits>
using namespace std;
int seclar(int arr[],int n){

    int seclar=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]=seclar)
    {
        seclar<arr[i];
    }
}
}
int main(){
    int numbers[]={2,3,4};

    int total=seclar(numbers,3);
    cout<<"the second largest " << total<<endl;
    return 0;

}