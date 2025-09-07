class Solution {
    public int[] sumZero(int n) {
        int[] out=new int[n];
        if(n==1){
            return new int[]{0};
        }
        
        
        for(int i=1;i<=(int)((n)/2);i++){
            out[i-1]=i;
            out[n-i]=-i;
        }
        return out;
    }
}