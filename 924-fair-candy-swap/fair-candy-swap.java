class Solution {
    public int[] fairCandySwap(int[] aliceSizes, int[] bobSizes) {
        int asum=0,bsum=0;
        HashSet<Integer> aboxs=new HashSet<>();
        for(int i:aliceSizes){
            asum+=i;
            aboxs.add(i);
        }
        for(int j:bobSizes){
            bsum+=j;
        }
        int diff=(asum-bsum)/2;
        for(int y:bobSizes){
           int x=y+diff;
            if(aboxs.contains(x)){
                return new int[]{x,y};
            }
        }
        return new int[]{};
    }
}