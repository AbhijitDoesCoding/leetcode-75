class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string usb;
        usb.reserve(word1.size() + word2.size());

        auto it1 = word1.begin();
        auto it2 = word2.begin();

        while (it1 != word1.end() || it2 != word2.end())
        {
            if (it1 != word1.end())
                usb.push_back(*it1++);
            if (it2 != word2.end())
                usb.push_back(*it2++);
        }

        return usb;
    }
};
