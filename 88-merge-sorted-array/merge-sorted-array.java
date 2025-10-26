class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] n1=new int[m+n];
        int k=0;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                n1[k++]=nums1[i++];
            }
            else{
                n1[k++]=nums2[j++];
            }
        }
        while(i<m){
            n1[k++]=nums1[i++];

        }
        while(j<n){
            n1[k++]=nums2[j++];
        }
        for(int x=0;x<m+n;x++){
            nums1[x]=n1[x];
        }
    }
}