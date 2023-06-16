// https://www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0

int longestSubarrayWithSumK(vector<int> A, long long k)
{
    int n = A.size();
    int i = 0, j = 0, ans = 0;
    long long sum = 0;
    while (i < n && j < n)
    {
        sum += A[i];
        if (sum == k)
        {
            ans = max(ans, i - j + 1);
            i++;
        }
        else if (sum < k)
            i++;
        else
        {
            sum -= (A[j] + A[i]);
            j++;
        }
    }
    return ans;
}