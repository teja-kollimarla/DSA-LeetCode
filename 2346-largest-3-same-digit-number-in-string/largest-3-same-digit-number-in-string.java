class Solution {
    public String largestGoodInteger(String num) {
        if(num.length()<3){
            return "";
        }
        for(int i=9;i>=0;i--){
            String s1=""+i+i+i;
            if(num.contains(s1)) return s1;
            
        }
        return "";
    }
}