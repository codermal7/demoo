class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum(2);int a=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    sum[0]=j;sum[1]=i;
                    a=a+1;
                    break;                    
                }                    
            }           
        }
         return sum;   
    }
};