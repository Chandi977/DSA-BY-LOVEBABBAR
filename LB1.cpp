#include<iostream>
using namespace std;
string reverseWord(string str);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<reverseWord(s);
    }
    return 0;
}
string reverseWord(string str)
{
    char temp[10000];
    for(int i=str.length()-1; i>=0; --i)
    {   for(int j=0; j<=str.length()-1; j++)
        {
            temp[j]=str[i];
            i--;
        }
    }
    return temp;
}