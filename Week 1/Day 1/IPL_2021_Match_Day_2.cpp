// https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class soolution
{
public:
    vector<int> max_of_subarrays(vector<int> A, int n, int k)
    {
        vector<int> ans;
        list<int> li;
        int mx = -1;
        for (int i = 0; i < k - 1; i++)
        {
            while (li.size() && li.back() < A[i])
                li.pop_back();
            li.push_back(A[i]);
        }
        for (int i = 0, j = k - 1; j < n; i++, j++)
        {
            while (li.size() && li.back() < A[j])
                li.pop_back();
            li.push_back(A[j]);
            ans.push_back(li.front());

            if (li.front() == A[i])
                li.pop_front();
        }
        return ans;
    }
};