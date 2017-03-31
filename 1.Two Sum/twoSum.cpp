class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        vector<int> ivec;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(um.find(nums[i]) == um.end())
            {
                um[target - nums[i]] = i;
                
            }else{
                ivec.push_back(um[nums[i]]);
                ivec.push_back(i);
                break;
            }
        }
        return ivec;
    }
};