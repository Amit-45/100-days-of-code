class Solution
{
public:
    bool isVowel(char ch)
    {
        switch (ch)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return true;
        default:
            return false;
        }
    }
    bool halvesAreAlike(string s)
    {
        int count1 = 0, count2 = 0;
        int n = s.length();
        int half = n / 2;
        for (int i = 0; i < half; i++)
        {
            if (isVowel(s[i]))
                count1++;
        }
        for (int i = half; i < n; i++)
        {
            if (isVowel(s[i]))
                count2++;
        }
        return count1 == count2;
    }
};
