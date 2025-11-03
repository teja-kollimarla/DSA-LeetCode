class Solution {
    public int minCost(String colors, int[] neededTime) {
        int tt=0;
        int maxtig=neededTime[0];
        for(int i=1;i<colors.length();i++){
            if(colors.charAt(i)==colors.charAt(i-1)){
                tt+=Math.min(maxtig,neededTime[i]);
                maxtig=Math.max(maxtig,neededTime[i]);
            }
            else{
                maxtig=neededTime[i];
            }
        }
        return tt; 
    }
}