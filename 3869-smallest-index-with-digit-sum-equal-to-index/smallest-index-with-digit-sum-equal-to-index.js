/**
 * @param {number[]} nums
 * @return {number}
 */
var smallestIndex = function (nums) {
    
    for (let i = 0; i < nums.length; i++) {
        let sum = sumcal(nums[i]);
        if (sum == i) {
            return i
        }
        // console.log(i+" "+sum)
    }
    return -1
};
const sumcal = (i)=> {
    sum=0
    while (i> 0) {
        sum += parseInt(i) % 10;
        i = parseInt(i/10);
    }
    return sum;
}