#include<iostream>
using namespace std;

int main()
{
    int arr[5]= {5,3,4,1,2};
    int max=0,min;
    for(int i=0; i<5; i++)
        if(max<arr[i])
            max=arr[i];
    min=arr[0];
    for(int i=0; i<5; i++)
        if(min>arr[i])
            min=arr[i];
    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min;
    return 0;
}