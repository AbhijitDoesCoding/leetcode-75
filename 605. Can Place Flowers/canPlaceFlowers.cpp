class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int u = flowerbed.size();
        for (int i = 0; i < u && n > 0; i++)
        {
            if (flowerbed[i] == 0)
            {
                bool left = (i == 0) || (flowerbed[i - 1] == 0);
                bool right = (i == u - 1) || (flowerbed[i + 1] == 0);

                if (left && right)
                {
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        return n == 0;
    }
};
