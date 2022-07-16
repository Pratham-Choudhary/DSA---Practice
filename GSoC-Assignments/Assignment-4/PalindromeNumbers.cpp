class Solution {
public:
    bool isPalindrome(int x) {
        int r=0;
        int n =x;
            while(x>0){
                if (r>INT_MAX/10 || r<INT_MIN/10){
                return 0;
            }
                r= r*10+ x%10;
                x= x/10;
            }
        if(r==n) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
