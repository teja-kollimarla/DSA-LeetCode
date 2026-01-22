class Solution {
    public boolean isSorted(List<Integer> arr){
      for(int i=0;i<arr.size()-1;i++){
        if(arr.get(i)>arr.get(i+1)){
            return false;
        }
      }
      return true;  
    }
    public int minimumPairRemoval(int[] nums) {
        int k=0;
        List<Integer> arr=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            arr.add(nums[i]);
        }
        while(!isSorted(arr)){
            int maxSum=Integer.MAX_VALUE;
            int min=0;
            for(int i=0;i<arr.size()-1;i++){
               
                    int curr=arr.get(i)+arr.get(i+1);
                    if(curr<maxSum){
                        maxSum=curr;
                        min=i;
                    }
                
            }
            arr.remove(min+1);
            arr.remove(min);
            arr.add(min,maxSum);
            k++;
        }
        return k;
        
    }
}