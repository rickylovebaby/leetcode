class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        addParent(res,"",n,n);
        return res;
    }
    void addParent(vector<string> &v, string str, int n, int m)
    {
        if(n > m){
            return;
        }
        if(n == 0 && m == 0)
        {    
            v.push_back(str);
            return;
        }
        if(m > 0) {addParent(v,str + ")",n,m-1);}
        if(n > 0) {addParent(v,str + "(", n-1, m);}
    }

};