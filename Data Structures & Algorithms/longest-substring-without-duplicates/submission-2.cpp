class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.empty()) return 0;
        map<char, int> check;
        int l = 0, maxL = INT_MIN;

        for(int r = 0; r < s.length(); r++)
        {
            if(check.count(s[r]) && check[s[r]] >= l)
            {
                l = check[s[r]] + 1;
            }

            check[s[r]] = r;
            maxL = max(maxL, r - l + 1);
        }
        
        return maxL;
    }
};
