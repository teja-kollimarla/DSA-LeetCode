class Solution {
    public int countNegatives(int[][] grid) {
        int neg=0;
        for(int r=0;r<grid.length;r++){
            int start=0;
            int end=grid[r].length-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(grid[r][mid]>=0){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            
            neg+=grid[r].length-start;
        }
        return neg;
    }
}