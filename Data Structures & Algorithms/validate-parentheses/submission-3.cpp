class Solution {
public:
    bool isValid(string s)
    {
        stack<char> state;

        for(char c : s)
        {
            if(c == '{' || c == '(' || c == '[')
            {
                state.push(c);
            } else
            { 
                if (state.empty()) return false;

                if(c == '}' && state.top() == '{')
                {
                    state.pop();
                } else if (c == ')' && state.top() == '(')
                {
                    state.pop();
                } else if (c == ']' && state.top() == '[')
                {
                    state.pop();
                } else 
                {
                    return false;
                }
            }
        }

        return state.empty();
    }
};
