int calculateMinPatforms(int at[], int dt[], int n) {
  sort(at, at + n);
  sort(dt, dt + n);
  int i=0 ;
  int j=0 ; 
  int ans = 0;
  int num = 0;

  while(i<n && j<n)
  {
      if(at[i]<=dt[j])
      {
          num++;
          i++;
      }
      else
      {
          num--;
          j++;
      }
      ans = max(ans,num);
  }
  return ans;
}
