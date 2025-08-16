class Solution {
    public int maximum69Number (int num) {
        String s=String.valueOf(num);
       char[] charStr=s.toCharArray();
       for(int i=0;i<charStr.length;i++){
            if(charStr[i]=='6'){
                charStr[i]='9';
                break;
            }
       }
       String s1=new String(charStr);
       return Integer.parseInt(s1);
    }
}