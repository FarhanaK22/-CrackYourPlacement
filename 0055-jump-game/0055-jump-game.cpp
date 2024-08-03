class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n ==1)
        return 1;
        if(nums[0]==0)
        return 0;
        if(nums[0]==n-1 ) return 1;
        int maxReach=nums[0];
        int i=0;
        int maxindex =0 ;
        while(i<n-1)
        {   if(maxindex + nums[maxindex] >= n-1)
            return 1;
            else
            i = maxindex;
            maxReach = nums[i];
            int step = maxReach;
            nums[maxindex] = -1;
            int j=i;
            int count=-1;
            while(step && j+1 < n-1)
            { 
                j++;
                if(nums[maxindex] <= nums[j] || nums[maxindex] == count)
               {
                 maxindex = j;
                 count =0;
               }
               if(nums[j] == 0)
               count++;
                step--;
            }
            if( nums[maxindex]==0)
            return 0;
           
        }
        return 0;
    }
};