class Solution {
public:
   int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> s; // Stack to store indices
    vector<int> left(n), right(n);

    // Calculate the left boundary for each bar
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && heights[s.top()] >= heights[i])
            s.pop();
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    // Clear the stack for the next pass
    while (!s.empty())
        s.pop();

    // Calculate the right boundary for each bar
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && heights[s.top()] >= heights[i])
            s.pop();
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    // Calculate the maximum area
    int maxArea = 0;
    for (int i = 0; i < n; ++i) {
        int area = heights[i] * (right[i] - left[i] - 1);
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

};