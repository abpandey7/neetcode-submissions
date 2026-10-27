class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if(nums.size() == 0) return 0;
        unordered_set<int> check(nums.begin(), nums.end());
        int totalmax = INT_MIN;

        for (int i : check)
        {
            if (!check.count(i - 1))
            {
                int curr = i;
                int currmax = 1;

                while (check.count(curr + 1))
                {
                    curr++;
                    currmax++;
                }

                totalmax = max(totalmax, currmax);
            }
        }

        return totalmax;
    }
};
