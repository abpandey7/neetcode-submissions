class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        set<vector<int>> solset;
        for(int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int> _2sum;
            for(int j = 0; j < nums.size(); j++)
            {
                if(j == i)
                    continue;
                
                int targetsum = -1 * nums[i];
                if(_2sum.count(nums[j]))
                {
                    vector<int> temp = {nums[i], nums[j], _2sum[nums[j]]};
                    sort(temp.begin(), temp.end());
                    solset.insert(temp);
                } else 
                {
                    _2sum[targetsum - nums[j]] = nums[j];
                }
            }
        }

        vector<vector<int>> sol(solset.begin(), solset.end());
        return sol;
    }
};
