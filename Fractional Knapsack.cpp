#include <bits/stdc++.h> 
bool comp(pair<double,double> a, pair<double,double> b)
{
    if(a.second/a.first >= b.second/b.first) return true;
    return false;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{  
    sort(items.begin(),items.end(), comp);
    double ans = 0;
    double wt =w;
    for(int i=0 ; i<n ; i++)
    {
        if(wt>=items[i].first)
        {
            ans += items[i].second;
            wt = wt-items[i].first;
        }
        else
        {
            double x = items[i].second*wt/items[i].first;
            ans += x;
            break;
        }
    }
    return ans;
}
