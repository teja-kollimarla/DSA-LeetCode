class Solution {
    public int totalMoney(int n) {
        int start =1;
        int total=0;
        for(int i=n;i>0;){
            if(i>=7){
                total+=(7*(2*start+6))/2;
                i-=7;
                start++;
            }

            else{
                total+=(i*(2*start+(i-1)))/2;
                break;
            }
            
        }
        return total;

        
    }
}