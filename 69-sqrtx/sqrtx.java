class Solution {
    public int mySqrt(int x) {
        int start=1;
        int end =x;
        int ans=1;
        if(x<1)return 0;
        while(start<=end){
            int mid=start+(end-start)/2;
            long sq=(long)mid*mid;
            if(sq>x){
                end=mid-1;
            }
            else if(sq<x){
                ans=mid;
                start=mid+1;
            }
            else{
                return mid;
            }

        }
        return ans;

    }
}