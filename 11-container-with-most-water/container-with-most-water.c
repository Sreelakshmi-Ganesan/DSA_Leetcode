int maxArea(int* height, int heightSize) {
    int max_area=0,ht=0,w=0;
    int left=0,right=heightSize-1;
    while(left<right)
    {
        if(height[left]<height[right])
        {
            ht=height[left];
           w=right-left;
          left++;
         
        }
        else{
            ht=height[right];
            w=right-left;
          right--;
         
        }
        if(max_area<(ht*w))
        {
            max_area=ht*w;
        }
}
return max_area;
}