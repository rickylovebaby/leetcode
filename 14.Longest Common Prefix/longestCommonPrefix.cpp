class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "";
        int n = strs.size();
        for(int i = 0; n > 0 ; pre += strs[0][i],i++)
        {
            for(int j = 0;j < n; j++)
            {
                if(i >= strs[i].size() ||(j >0 && strs[j][i] != strs[j-1][i]))
                {
                    return pre;
                }
            }
        }
        return pre;
    }
};