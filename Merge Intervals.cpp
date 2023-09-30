#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
    int n = intervals.size();
    vector<vector<int>> ans;

    int i=intervals[0][0];
    int j=intervals[0][1];

    for(int k=0 ; k<n ; k++)
    {
        int left = intervals[k][0];
        int right = intervals[k][1];
        if(j>=left)
        {
            j = max(right,j);
        }
        else
        {
            ans.push_back({i,j});
            i = left;
            j = right;
        }
    }
    ans.push_back({i,j});
    return ans;
}
