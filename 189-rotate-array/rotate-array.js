/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    k=k%nums.length
    const reversed=(left,right)=>{
        while(left<right){
        [nums[left],nums[right]]=[nums[right],nums[left]]
        left++
        right--}
    }
    reversed(0,nums.length-1)
    reversed(0,k-1)
    reversed(k,nums.length-1)
    
    
    console.log(nums)
};