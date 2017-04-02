class Solution {
public:
    int reverse(int x) {
        const int  a = 2147483647;
        const int  b = -2147483648; 
        int y = 0;
        int n;
        while(x != 0)
        {
            n = x % 10;
            if( y > a/10 || y < b/10)
            {
               return 0;
            }
             y = y*10 + n;
             x /= 10;
        }
        return y;
    }
};