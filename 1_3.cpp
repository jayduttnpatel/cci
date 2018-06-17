#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    char arr[n+1];
    for(int i=0;i<n;i++)
        arr[i]=s[i];
    arr[n]='\0';
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==' ')
            arr[i]='\0';
        else
            break;
    }

    return 0;
}
