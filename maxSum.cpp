#include<bits/stdc++.h>
using namespace std;
// int pick=0;
// int notpick=0;
// int n;

// int solve(int n,int index,int prev,vector<int> &v)
// {
//     if(index<n)
//     {
//         return 0;
//     }

//     if(prev==-1 || v[index]>prev)
//     {
//         prev=v[index];
//         pick=v[index]+solve(n,index+1,prev,v);
//         cout<<"pick=>"<<pick<<" ";
//     }
//         notpick=solve(n,index+1,prev,v);
//         cout<<"notpick=>"<<notpick<<" ";
   
//     return max(pick,notpick);
// }

int solve(int n, int index, int prev, vector<int> &v) {
    if (index >= n) {
        return 0;
    }

    int pick = 0;
    int notpick = 0;

    if (prev == -1 || v[index] > prev) {
        int prev_temp = v[index];
        pick = v[index] + solve(n, index + 1, prev_temp, v);
        cout << "pick=>" << pick << " ";
    }

    notpick = solve(n, index + 1, prev, v);
    cout << "notpick=>" << notpick << " ";

    return max(pick, notpick);
}

int main(int argc, char const *argv[])
{
    vector<int> v={1, 101, 2, 3, 100};
    int n=v.size();
    int prev=-1;
    cout<<solve(n,0,prev,v)<<endl;
    return 0;
}
