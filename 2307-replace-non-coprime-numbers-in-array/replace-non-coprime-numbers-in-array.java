class Solution {
    public int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    public int lcm(int a,int b){
        return (int)(a/gcd(a,b)*b);
    }
    public List<Integer> replaceNonCoprimes(int[] nums) {
        List<Integer> a=new ArrayList<>();
        for(int num:nums){
            a.add(num);
        }
        int i=0;
        while(i<a.size()-1){
            
            if(gcd(a.get(i),a.get(i+1))>1){
                int y=a.get(i+1);
                int x=a.get(i);
                a.set(i,lcm(x,y));
                a.remove(i+1);
               if(i>0)i--;
            }
                
                else i++;
              
        } 
        return a;
    }
}