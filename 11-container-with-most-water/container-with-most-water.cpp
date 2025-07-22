class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area = 0;
        while(left<right){
            int h,w;
            if(height[left]<=height[right]){
            h=height[left];
            w = right-left;
            area = max(area,w*h);
            left++;
        }
        else
            {
            h=height[right];
            w = right-left;
            area = max(area,w*h);
            right--;
            }
        }

        return area;
    }
};