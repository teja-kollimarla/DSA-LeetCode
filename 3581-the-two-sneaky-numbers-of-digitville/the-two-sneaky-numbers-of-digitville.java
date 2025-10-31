
class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        HashMap<Integer,Integer> a=new HashMap<>();
        for(int x:nums){
            a.put(x,a.getOrDefault(x,0)+1);
        }
        int[] c=new int[2];
        int i=0;
        for(Integer b:a.keySet()){
            if(a.get(b)>1){
                c[i++]=b.intValue();
            }
        }
        return c;
        
    }
}