// https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

int lenOfLongSubarr(int A[], int n, int k)
{
    int i = 0, ans = 0;
    unordered_map<long long, int> mp;
    long long sum = 0;
    while (i < n)
    {
        sum += A[i];
        if (sum == k)
            ans = max(ans, i + 1);

        if (mp.find(sum - k) != mp.end())
            ans = max(ans, i - mp[sum - k]);
        if (mp.find(sum) == mp.end())
            mp[sum] = i;
        i++;
    }
    return ans;
}