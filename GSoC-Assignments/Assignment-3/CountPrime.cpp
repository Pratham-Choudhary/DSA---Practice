class Solution {
public:
    bool is_Prime(int n)
    {
	if(n<=1)    return false;
        for(int i=2;i<n;i++)
        {
           if(n%i==0) return false;
        }
        return true;
    }
    
    int countPrimes(int n)
    {
        int count=0;
        for(int i=2;i<=n;i++)
        {
            if(is_Prime(i))
                count++;
        }
        return count;
    }
};
