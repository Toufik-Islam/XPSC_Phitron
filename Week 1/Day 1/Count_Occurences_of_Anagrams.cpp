// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class soolution
{
public:
    int search(string pat, string txt)
    {
        vector<int> A(26), B(26);
        int ans = 0;
        int k = pat.size(), n = txt.size();
        for (int i = 0; i < k; i++)
            A[pat[i] - 'a']++;

        for (int i = 0; i < k - 1; i++)
            B[txt[i] - 'a']++;

        for (int i = 0, j = k - 1; j < n; i++, j++)
        {
            B[txt[j] - 'a']++;

            if (matched(A, B))
                ans++;

            B[txt[i] - 'a']--;
        }
        return ans;
    }

    bool matched(vector<int> &A, vector<int> &B)
    {
        for (int i = 0; i < 26; i++)
            if (A[i] != B[i])
                return false;

        return true;
    }
};