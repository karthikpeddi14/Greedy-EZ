class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int fives = 0;
        int tens = 0;
        int twenties = 0;

        for(int i=0 ; i<n ; i++)
        {
            if(bills[i]==5) fives++;
            else if(bills[i]==10) 
            {
                tens++;
                if(fives>=1)fives--;
                else return false;
            }
            else
            {
                twenties++;
                if(tens!=0)
                {
                    tens--;
                    if(fives>=1)fives--;
                    else return false;
                }
                else
                {
                    if(fives>=3)fives -= 3;
                    else return false;
                }
                
            }
        }
        return true;
    }
};
// 5 - x
// 10 - y
// 20 - z

// a = min()
