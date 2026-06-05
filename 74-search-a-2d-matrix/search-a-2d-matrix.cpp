class Solution {
public:
    bool f(vector<vector<int>>&matrix,int n,int target,int low,int high)
    {
        while(low<=high){
        int mid=(low+high)/2;
        int row=mid/n;
        int col=mid%n;
        if(matrix[row][col]==target) return true;
        else if(matrix[row][col]<target) low=mid+1;
        else high=mid-1;
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        return f(matrix,n,target,0,n*m-1);
    }
};