// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

int longestKSubstr(string A, int k)
{
    int ans = -1, unique = 0, i = 0, j = 0, n = A.size();
    int mp[26] = {0};

    while (i < n && j < n)
    {
        mp[A[i] - 'a']++;
        if (mp[A[i] - 'a'] == 1)
            unique++;

        if (unique == k)
            ans = max(ans, i - j + 1);
        else if (unique > k)
        {
            while (unique > k)
            {
                mp[A[j] - 'a']--;
                if (mp[A[j] - 'a'] == 0)
                {
                    unique--;
                    j++;
                    break;
                }
                j++;
            }
        }
        i++;
    }
    return ans;
}