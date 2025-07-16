class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int max_area=0;
        while(left<right)
        { int h=min(height[left],height[right]);
           int currarea=h*(right-left);
           max_area=max(max_area,currarea);
            
            if(height[left]<height[right])
            left++;
            else 
            right--;

        }
         
      return max_area;
    }
};