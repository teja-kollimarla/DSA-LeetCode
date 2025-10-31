class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        boolean[] s=new boolean[nums.length];
        int[] res=new int[2];
        int i=0;
        for(int n:nums){
            
            if(s[n]){
                res[i++]=n;
            }
            else{
                s[n]=true;
            }
        }
        return res;
    }
}