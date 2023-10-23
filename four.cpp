#include<bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n) {
    if(n<=0)
    return false;
    int a=n&(n-1);
    int b=(n-1)%3;
    cout<<a<<" "<<b<<endl;
    if((n&(n-1))==0 && ((n-1)%3)==0)
    return true;

    return false;
    }

int main(int argc, char const *argv[])
{
    int n=16;
   cout<<isPowerOfFour(n)<<endl;
    return 0;
}
