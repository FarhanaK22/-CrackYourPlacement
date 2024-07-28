class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map <int,int> mp;
    mp[nums[0]]=0;
    for(int i =1;i<n;i++)
    {   int val = target - nums[i];
        if(mp.find(val)!=mp.end() )
        return {mp[val],i};
        else
        mp[nums[i]] = i;
    }
    return {-1};
    }
};