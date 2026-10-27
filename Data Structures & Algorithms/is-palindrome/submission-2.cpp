class Solution {
public:
    bool isPalindrome(string s)
    {
        int l = 0, r = s.length()-1;
        while(l < r)
        {
            while(!isalnum(s[r])) {r--;}

            while(!isalnum(s[l])) {l++;}

            if(l < r && (char)tolower(s[l]) != (char)tolower(s[r]))
                return false;
            
            l++;
            r--;
        }

        return true;        
    }
};
