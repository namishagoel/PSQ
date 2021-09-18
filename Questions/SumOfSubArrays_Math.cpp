#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,77,88,99,11,2};
    //O(n) Time Complexity
    //Count The Frequency of Each of The Element in the Final Sum * multiply it with the element and then add.
    int sum=0;
    for(int i=0; i<10; i++)
        sum+=(arr[i] * (i+1) * (10-i));
    cout<<"\n"<<sum<<"\n";
    return 0;
}