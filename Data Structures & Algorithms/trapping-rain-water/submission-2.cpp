class Solution {
public:
    int trap(vector<int>& height)
    {
        int l = 0, r = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int trapVol = 0;

        while(l < r)
        {
            if(height[l] < height[r])
            {
                leftMax = max(leftMax, height[l]);
                trapVol += leftMax - height[l];
                l++;
            }
            else
            {
                rightMax = max(rightMax, height[r]);
                trapVol += rightMax - height[r];
                r--;
            }
        }

        return trapVol;
    }
};