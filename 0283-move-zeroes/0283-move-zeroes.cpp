class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int countnonz=0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
               nums[ countnonz++] = nums[i];
            }
        }
        for(int i =countnonz;i<nums.size() ;i++)
        {
                nums[i]=0;
        }
    }
};