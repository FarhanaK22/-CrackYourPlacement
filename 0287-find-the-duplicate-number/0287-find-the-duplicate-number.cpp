class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    int maxi = nums[0];
    for (int i = 1; i < n; i++) {
        maxi = max(maxi, nums[i]);
    }

    vector<int> hash(maxi + 1, 0); // Initialize vector with size maxi + 1

    for (int i = 0; i < n; i++) {
        hash[nums[i]]++;
        if (hash[nums[i]] > 1) {
            return nums[i]; // Found the duplicate
        }
    }

    return -1; }
};