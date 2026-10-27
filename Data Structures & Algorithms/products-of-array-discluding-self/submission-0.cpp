class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        vector<int> pre(size, 1);
        vector<int> suf(size, 1);
        vector<int> sol(size);

        for(int i = 1; i < size; i++)
        {
            pre[i] = pre[i - 1] * nums[i - 1];
        }
        
        for(int i = size - 2; i >= 0; i--)
        {
            suf[i] = suf[i + 1] * nums[i + 1];
        }

        for(int i = 0; i < size; i++)
        {
            sol[i] = pre[i] * suf[i];
        }
        return sol;
    }
};