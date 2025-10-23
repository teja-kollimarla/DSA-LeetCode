class Solution {
    public boolean hasSameDigits(String s) {
       List<Integer> a=new ArrayList<Integer>();
       for(char i:s.toCharArray()){
        a.add(i-'0');
       }
       while(a.size()>2){
       List<Integer> next=new ArrayList<Integer>();
        for(int i=0;i<a.size()-1;i++){
            next.add((a.get(i)+a.get(i+1))%10);
        }
        a=next;
       }
       return a.get(1)==a.get(0);
    }
}