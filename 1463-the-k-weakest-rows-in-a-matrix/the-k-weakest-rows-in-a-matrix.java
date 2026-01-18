class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int row = 0; row < mat.length; row++) {
            int start = 0;
            int end = mat[row].length-1;
            while (start < end) {
                int mid = start + (end - start) / 2;
                if (mid<end && mat[row][mid] == 0) {
                    end = mid -1;
                } else {
                    start = mid + 1;
                }
            }
            if(end<0){

            }
           if(mat[row][start]==0 ){
            start--;
           }
            System.out.println(end+"-- "+start);
            map.put(row,start);
        }
        System.out.println(map);
        List<Integer> result = map.entrySet()
                .stream()
                .sorted(Map.Entry.comparingByValue())
                .map(Map.Entry::getKey)
                .toList();
        int[] res=new int[k];
        for(int i=0;i<k;i++){
            res[i]=result.get(i);
        }
        return res;

    }
}