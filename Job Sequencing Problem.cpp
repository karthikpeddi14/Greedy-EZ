#include<bits/stdc++.h>
bool comp(vector<int> a, vector<int> b)
{
    return a[2]>=b[2];
}
vector<int> jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(),jobs.end(),comp);
    int n=jobs.size(); 
    vector<int> a(n,-1);
    int ans = 0;
    int num = 0;

    for(int i=0 ; i<n ; i++)
    {
        int index = jobs[i][0];
        int deadline = jobs[i][1]-1;
        int profit = jobs[i][2];
        for(int j=deadline; j>=0 ; j--)
        {
            if(a[j]==-1)
            {
                a[j]=index;
                ans+=profit;
                num++;
                break;
            }
        }
    }
    return {num,ans};
}
