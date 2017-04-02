class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
        return water;
    }

};

//imporved version
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() -1;
        while(i<j){
            water = max(water,(j-i)*(min(height[i],height[j])));
            if(height[i] < height[j])
            {
                i++;
            }else{
                j--;
            }
        }
        return water;
    }
};