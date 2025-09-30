class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> products(nums.size(), 0);
        int product = 1, index, zeros = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeros++;
                index = i;
            }
            else
            {
                product *= nums[i];
            }
        }
        if (zeros > 1)
        {
        }
        else if (zeros == 1)
        {
            products[index] = product;
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                products[i] = product / nums[i];
            }
        }
        return products;
    }
};