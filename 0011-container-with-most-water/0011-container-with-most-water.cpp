class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int res = 0;

        int i=0;
        int j = n-1;

        while(i<j)
        {
            int val = min(height[j], height[i]) * ( j - i );
            res = max (res, val);

            if(height[i] < height[j])
            i++;

            else 
            j--;
        }
        return res;
    }
};