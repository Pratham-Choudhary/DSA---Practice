class Solution {
public:
    int reverse(int x) {
        long int n = 0;
        if (x>= 2147483647 || x<= -2147483647)
            return 0;
        if(x>0){
            while(x>0){
                n = n *10;
                if (n >= 2147483647 || n <= -2147483647)
                    return 0;
                n = n + (x%10);
                x = x/10;
            }
        }
        else{
            x = -1 * x;
            while(x>0){
                n = n * 10;
                if (n>= 2147483647 || n <= -2147483647)
                    return 0;
                n = n + (x%10);
                x = x/10;
            }
            n = -1 * n;
        }
        return int(n);
    }
};
