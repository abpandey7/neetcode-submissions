class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        vector<vector<int>> sol(nums.size() + 1);
        unordered_map<int, int> seen;

        for(int i : nums) {seen[i]++;}

        for(auto &p : seen)
        {
            sol[p.second].push_back(p.first);
        }

        vector<int> result;
        for(int i = sol.size() - 1; i >= 0 && result.size() < k; i--)
        {
            for(int val : sol[i])
            {
                result.push_back(val);
                if(result.size() == k) break;
            }
        }

        return result;
    }
};
