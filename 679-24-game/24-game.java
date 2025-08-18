class Solution {
    public static final double EPS=1e-6;
    public static final int tar=24;
    public boolean judgePoint24(int[] cards) {
        List<Double> nums=new ArrayList<>();
        for(int car:cards) nums.add((double)car);
        return dfs(nums);
    }
    private boolean dfs(List<Double> nums){
        if(nums.size()==1){
            return Math.abs(nums.get(0)-tar)<EPS;
        }
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                List<Double> ns=new ArrayList<>();
                for(int k=0;k<n;k++){
                    if(k!=i&& k!=j) ns.add(nums.get(k));
                }
                for(double v:compute(nums.get(i),nums.get(j))){
                    ns.add(v);
                    if(dfs(ns)) return true;
                    ns.remove(ns.size()-1);
                }
            }
        }
        return false;
    }
    private List<Double> compute(double a,double b){
        List<Double> result =new ArrayList<>();
        result.add(a+b);
        result.add(a-b);
        result.add(b-a);
        result.add(a*b);
        if(Math.abs(b)>EPS)result.add(a/b);
        if(Math.abs(a)>EPS)result.add(b/a);
        return result;
    }
}