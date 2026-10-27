class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> seen;
        int maxfreq = INT_MIN;
        for(int i : nums)
        {
            seen[i]++;
            maxfreq = max(maxfreq, seen[i]);
        }

        vector<vector<int>> sol(maxfreq + 1);
        for(auto &p : seen)
        {
            sol[p.second].push_back(p.first);
        }

        vector<int> ans;
        for (; maxfreq >= 1 && ans.size() < k; maxfreq--)
        {
            for (int num : sol[maxfreq])
            {
                ans.push_back(num);

                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};
