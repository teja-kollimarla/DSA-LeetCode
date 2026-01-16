class Solution {
    public int bt(int[] nums,int target,int isstart){
        int start =0,end=nums.length-1,ans=-1;
        while(start<=end){
            int mid = start +(end - start)/2;

            if(nums[mid]<target){
                start=mid+1;

            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                ans=mid;
                if(isstart==1){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
        return ans;
        
    }
    public int[] searchRange(int[] nums, int target) {
        int start=bt(nums,target,1);
        int end=bt(nums,target,0);
        return new int[]{start,end};
        
    }
}