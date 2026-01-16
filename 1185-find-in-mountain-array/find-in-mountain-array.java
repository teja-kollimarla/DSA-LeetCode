/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int peakIndexInMountainArray(MountainArray arr) {
        int start=0;
        int end=arr.length()-1;
        while(start<end){
            int mid =start+(end-start)/2;
            if(arr.get(mid)<arr.get(mid+1)){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return start;
    }

    public int findInMountainArray(int target, MountainArray mountainArr) {
     
     int op=peakIndexInMountainArray(mountainArr);
     int min=bt(mountainArr,0,op,target,true);
     if(min==-1){
        return bt(mountainArr,op,mountainArr.length()-1,target,false);
     }
       return min;   
    }

    public int bt(MountainArray mountainArr,int start,int end,int target,boolean isStart){
        while(start<=end){
        int mid=start+(end-start)/2;
        if(mountainArr.get(mid)<target){
            if(isStart){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        else if(mountainArr.get(mid)>target){
            if(isStart){end=mid-1;}
            else {start=mid+1;}
        }
        else{
            return mid;
        }
     }
     return -1; 
    }
}
