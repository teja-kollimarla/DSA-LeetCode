class Solution {
    public boolean isvalid(int n,String x){
        return Integer.parseInt(x,2)>=n;
    }
    public int smallestNumber(int n) {
        String b=Integer.toBinaryString(n);
       b= b.replace('0','1');
        
        while(!isvalid(n,b)){
             b+="1";
        }
        
        return Integer.parseInt(b,2);
    }
}