class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=1; i<n ; i++)
        {
            int current = nums[i];
            int j=i-1;
            while(nums[j]>current && j>=0)
            {
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=current;
        }
        cout<<"[";
        for(int i=0 ; i<n ; i++)
        {
            cout<<nums[i]<<",";
        }
        cout<<"]";
        cout<<endl;
        return nums; 
    }
};
