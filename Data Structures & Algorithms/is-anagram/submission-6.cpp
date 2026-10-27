class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int s_seen[26] = {};
        int t_seen[26] = {};

        for(char c : s) {s_seen[c - 'a']++;}
        for(char c : t) {t_seen[c - 'a']++;}

        for(int i = 0; i < 26; i++) 
        {if(t_seen[i] != s_seen[i]) return false;}

        return true;
    }
};
