#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int a[26]={0},b[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        a[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++)
    {
        b[s2[i]-'a']++;
    }
    bool ans=true;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
            ans=false;
    }
    cout<<(ans?"yes":"no");
    return 0;
}
