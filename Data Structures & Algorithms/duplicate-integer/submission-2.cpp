class Solution {
public:
    bool hasDuplicate(vector<int>& nums)
    {
        unordered_map<int, bool> map;

        for(int i : nums)
        {
            if(map.find(i) != map.end())
            {
                return true;
            } else 
            {
                map[i] = true;
            }
        }

        return false;
    }
};