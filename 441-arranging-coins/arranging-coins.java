class Solution {
    public int arrangeCoins(int n) {
        int start=0;
        int end=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            long c=(long) mid*(mid+1)/2;
            if(n==c){
                return mid;
            }
            else if(c<n){
                start=mid+1;
            }
            else{
                end =mid-1;
            }
        }
        return end;
    }
}