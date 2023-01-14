class Solution{
public:
  vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> Queries){
      // code here
    vector<int> ans(Q);
    vector<long long> prefix(N);
    vector<pair<int, int>> arr(N);
    for (int i = 0; i < N; i++)
    {
        arr[i] = {A[i], i};
    }
    sort(arr.begin(), arr.end());
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[arr[i].second] = i;
    }
    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i].first;
        prefix[i] = sum;
    }
    for (int m = 0; m < Q; m++)
    {
        int money = Queries[m][0];
        int k = Queries[m][1];
        int idx = upper_bound(prefix.begin(), prefix.end(), money) - prefix.begin();
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            v[i] = mp[Queries[m][i + 2] - 1];
        }
        sort(v.begin(), v.end());
        int count = 0, j;
        for (int i = 0; i < k; i++)
        {
            j = v[i];
            if (j < idx)
            {
                count++;
                money += arr[j].first;
                idx = upper_bound(prefix.begin(), prefix.end(), money) - prefix.begin();
            }
        }
        ans[m] = idx - count;
    }
    return ans;
  }
};
