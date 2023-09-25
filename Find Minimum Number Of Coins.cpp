void f(vector<int>& coins, int k, vector<int>& ans)
{
    if(k==0) return;
    for(int i=coins.size()-1 ; i>=0 ; i--)
    {
        if(k/coins[i]>=1)
        {
            ans.push_back(coins[i]);
            f(coins,k-coins[i],ans);
            break;
        }
    }

}
vector<int> MinimumCoins(int n)
{
    vector<int> coins={1,2,5,10,20,50,100,500,1000};
    vector<int> ans;
    f(coins,n,ans);
    return ans;
}
