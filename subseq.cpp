 #include <bits/stdc++.h>
 using namespace std;

 bool find132pattern(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[k]>nums[i] && nums[j]>nums[k])
                    return true;
                }
            }
        }
        return false;
    }

int main(int argc, char const *argv[])
{
    vector<int> nums={1,2,3,4};
    cout<<find132pattern(nums);
    return 0;
}
