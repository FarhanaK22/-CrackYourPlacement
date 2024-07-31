class Solution {
public:
    
    int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int totalsum =0;
    int windowsum =0;
    for(int i=0;i<n;i++)
    totalsum += cardPoints[i];

    for(int i=0;i< n-k ;i++)
    windowsum += cardPoints[i];

    int minsum =windowsum;
    for(int i= n-k ;i<n;i++)
    {
        windowsum += cardPoints[i] - cardPoints[i -(n - k)];
        minsum = min (minsum , windowsum);
    }
    return totalsum - minsum;
}

};