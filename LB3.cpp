#include<iostream>
using namespace std;
class Solution
{
public:
    void sort012(int a[],int arr_size)
    {
        int x=0,y=arr_size-1,z=0;
        while(z<=y)
        {
            switch (a[z])
            {
            case 0:
                swap(a[x++],a[z++]);
                break;
            case 1:
                z++;
                break;
            case 2:
                swap(a[z],a[y--]);
                break;
            }
        }
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        Solution ob;
        ob.sort012(a,n);
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}