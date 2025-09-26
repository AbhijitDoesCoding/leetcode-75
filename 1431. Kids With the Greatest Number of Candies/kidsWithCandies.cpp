class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &c, int e)
    {
        int m = 0;
        for (int x : c)
            if (x > m)
                m = x;
        vector<bool> r;
        r.reserve(c.size());
        for (int x : c)
            r.push_back(x + e >= m);
        return r;
    }
};
