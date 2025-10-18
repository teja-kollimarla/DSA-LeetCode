import java.util.*;


class Solution {

    public int uniqueMax(int[] nums){
        Set<Integer> sc=new HashSet<>();
        for(int e:nums){
            sc.add(e);
        }
        return sc.size();
    }

    public int maxDistinctElements(int[] nums, int k) {
        Arrays.sort(nums);
        int ls=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            int min =nums[i]-k;
            int max=nums[i]+k;
            int as=Math.max(min,ls+1);
            if(as<=max){
                nums[i]=as;
                ls=as;
            }

        }
        return uniqueMax(nums);
        
    }
}