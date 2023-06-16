// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int n, long long int k)
{
    vector<long long> ans;
    queue<long long int> q;
    for (int i = 0; i < k - 1; i++)
        if (A[i] < 0)
            q.push(A[i]);

    for (int i = 0, j = k - 1; j < n; j++, i++)
    {
        if (A[j] < 0)
            q.push(A[j]);

        if (q.size())
            ans.push_back(q.front());
        else
            ans.push_back(0);

        if (A[i] < 0)
            q.pop();
    }
    return ans;
}