class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash (n+1,0);
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(hash[nums[i]] ++ )
            ans.push_back(nums[i]);
        }
        return ans;

    }
};