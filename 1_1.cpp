#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.length();i++)
    {
        a[s[i]-'a']++;
    }
    bool ans=true;
    for(int i=0;i<26;i++)
    {
        if(a[i]>1)
            ans=false;
    }
    cout<<(ans?"unique":"not unique");
    return 0;
}
