class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        map<vector<int>,vector<string>> storage;
        for(auto& str : strs)
        {
            vector<int> freqcntr(26);
            for(char c : str)
            {
                freqcntr[c - 'a']++;
            }
            storage[freqcntr].push_back(str);
        }

        vector<vector<string>> sol;
        for(auto& p : storage)
        {
            sol.push_back(p.second);
        }

        return sol;
    }
};
