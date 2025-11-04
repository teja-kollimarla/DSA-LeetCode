class Solution {

 

    public int calsum(int[] n,int s,int e,int x){
        int max_val=50;
        int[] freq=new int[max_val+1];
        int dc=0;
        int ts=0;
        for(int i=s;i<=e;i++){
            int num=n[i];
            ts+=num;
            if(freq[num]==0){
                dc++;
            }
            freq[num]++;
        }
        if(dc<x){
            return ts;
        }
        int res=0;
        for(int selection =0;selection<x;selection++){
            int bn=-1;int bf=-1;
            for(int num=max_val;num>=1;num--){
                if(freq[num]>bf){
                    bf=freq[num];
                    bn=num;
                }
            }
            if(bn!=-1){
                res+=bn*bf;
                freq[bn]=0;
            }

        }
        return res;

    }
    public int[] findXSum(int[] nums, int k, int x) {
        int n=nums.length;
        int[] res=new int[n-k+1];
        for(int i=0;i<res.length;i++){
            res[i]=calsum(nums,i,i+k-1,x);

        }
        return res;
    }
}