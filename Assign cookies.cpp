int assignCookie(vector<int> &greed, vector<int> &size) {
	sort(greed.begin(),greed.end());
	sort(size.begin(),size.end());
	
	int i=0, j=0, ans=0; 
	int g = greed.size();
	int s = size.size();

	while(i<g && j<s)
	{
		if(greed[i]<=size[j])
		{
			i++;
			j++;
			ans++;
		}
		else
		{
			j++;
		}
	}
	return ans;
}
