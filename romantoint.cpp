#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s="ILC";
    int i=s.length()-1;
    int count=0;
    int flag=0;
    while(i>=0)
    {
        int prev=flag;
        if(s[i]=='I')
        {
            flag=1;
        }
        else if(s[i]=='V')
        {
            flag=5;
        }
        else if(s[i]=='X')
        {
            flag=10;
        }
        else if(s[i]=='L')
        {
            flag=50;
        }
        else if(s[i]=='C')
        {
            flag=100;
        }
        else if(s[i]=='D')
        {
            flag=500;
        }
        else if(s[i]=='M')
        {
            flag=1000;
        }


        if(prev <= flag)
        {
            count+=flag;
        }
        else
        {
            count-=flag;
        }
        i--;
    }

    cout<<count<<endl;
    return 0;
}
