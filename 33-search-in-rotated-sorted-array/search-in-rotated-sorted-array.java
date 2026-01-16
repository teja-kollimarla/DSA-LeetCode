class Solution {
    public int search(int[] nums, int target) {
        int p=findPivoit(nums);
        if(p==-1){
            return bt(nums,target,0,nums.length-1);
        }
        if(nums[p]==target){
            return p;
        }
        if(target>=nums[0]){
            return bt(nums,target,0,p-1);
        }
        
            return bt(nums,target,p+1,nums.length-1);
        
    }

    public int findPivoit(int[] nums){
        int start=0;
        int end=nums.length -1 ;
        while(start <=end){
            int mid=start +(end-start)/2;
            if(mid>start && nums[mid]<nums[mid-1]){
                return mid-1;
            }
            if(mid<end && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]<=nums[start]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }

    public int bt(int[] arr,int target,int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]<target){
                start=mid+1;
            }
            else if(arr[mid]> target){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

}