#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";
        for(int i=0;i<s.size();i++)
        {
            cout<<s1<<" ";
            if(s[i]=='#')
            {
                if(s1.size()!=0)
                {
                    s1.erase(s1.size()-1,1);
                }
            }
            else
            {
                s1+=s[i];
            } 
        }
        cout<<s1<<" ";
        cout<<endl;
        for(int i=0;i<t.size();i++)
        {
            cout<<t1<<" ";
            if(t[i]=='#')
            {
                if(t1.size()!=0)
                {
                    t1.erase(t1.size()-1,1);
                }
                
            }
            else
            {
                t1+=t[i];
            }
        }
        cout<<t1<<" ";
        return s1==t1;
    }
};

int main(int argc, char const *argv[])
{
    string s="y#fo##f";
    string t="y#f#o##f";
    Solution s1;
    cout<<s1.backspaceCompare(s,t)<<endl;
    return 0;
}
