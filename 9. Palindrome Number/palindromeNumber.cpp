class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
            
        if(x == 0)
            return true;
        int m = 0, t =x;
        
        while(x){
            m = m * 10 + x % 10;
            x/=10;
        }
        return t==m;

    }
};