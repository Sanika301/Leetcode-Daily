#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums={1,2,1};
    vector<int> result;
    int size=nums.size();
    for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            while(j!=i)
            {
                if(nums[j]>nums[i])
                {
                    cout<<nums[j]<<" ";
                    result.push_back(nums[j]);
                    break;
                }
                j=(j+1)%size;
            }
            if(j==i)
            result.push_back(-1);
        }
    return 0;
}
