class Solution
{
    public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)
    {
        int n = position.size();
        vector<vector<int>> state(n);

        for(int i = 0; i < n; i++)
        {
            state[i] = {position[i], speed[i]};
        }
        sort(state.begin(), state.end());

        stack<double> s;
        for(int i = 0; i < n; i++)
        {
            int pos = state[i][0]; int speed = state[i][1];
            double time = (1.0 * target - pos) / speed;

            if(s.empty())
            {
                s.push(time);
                continue;
            }

            while(!s.empty() && s.top() <= time)
            {
                s.pop();
            }

            s.push(time);
        }

        return s.size();
    }
};
