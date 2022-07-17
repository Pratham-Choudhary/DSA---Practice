class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        int r = 0;
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(nums[i] == nums[j])
                {
                    remove(nums.begin(),nums.end(),i);
                    r++;
                }
            }
        }
        return nums;
    }
};
