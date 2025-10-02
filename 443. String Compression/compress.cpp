class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int ans = 0;
        for (int i = 0; i < chars.size();)
        {
            int j = i;
            while (j < chars.size() && chars[j] == chars[i])
                j++;
            chars[ans++] = chars[i];
            if (j - i > 1)
                for (char c : to_string(j - i))
                    chars[ans++] = c;
            i = j;
        }
        return ans;
    }
};
