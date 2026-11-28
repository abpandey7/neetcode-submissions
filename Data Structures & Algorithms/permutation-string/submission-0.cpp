class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        if(s2.size() < s1.size()) return false;

        vector<int> arr_s1(26);
        for(char c : s1) {arr_s1[c - 'a']++;}

        vector<int> arr_s2(26);
        for(int i = 0; i < s1.size(); i++) {arr_s2[s2[i] - 'a']++;}

        for(int l = 0, r = s1.size()-1; r < s2.size(); )
        {
            char rm = s2[l]; bool flag = true;
            for(int i = 0; i < 26; i++)
            {
                if(flag == false)
                    break;
                if(arr_s1[i] != arr_s2[i])
                    flag = false;
            }

            if(flag) return true;
            l++; r++;

            if(r < s2.size())
            {
                arr_s2[rm - 'a']--;
                arr_s2[s2[r] - 'a']++;
            }
        }

        return false;
        
    }
};
