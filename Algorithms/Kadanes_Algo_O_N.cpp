#include<iostream>

using namespace std;

int main()
{
    int arr[10] = {1,2,3,5,-3,8,-19,15};

    int cs=0,ms=0;

    for(int i = 0; i<10; i++)
    {
        cs+=arr[i];
        if(cs<0)
            cs=0;
        ms=max(cs,ms);
    }

    cout<<ms<<"\n";

    return 0;
}