// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

long maximumSumSubarray(int k, vector<int> &A, int n)
{
    long mx = 0, sum = 0;
    for (int i = 0; i < k - 1; i++)
        sum += A[i];

    for (int i = 0, j = k - 1; j < n; i++, j++)
    {
        sum += A[j];
        mx = max(mx, sum);
        sum -= A[i];
    }
    return mx;
}