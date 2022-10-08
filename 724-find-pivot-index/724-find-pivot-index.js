/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    var i = nums.length-1;
    var leftSum = 0;
    var rightSum = 0;
    
    while (i>0){
        rightSum+=nums[i--];
    }
    
    while (i<nums.length){
        if (leftSum == rightSum){
            return i;
        }
        leftSum+=nums[i++];
        rightSum-=nums[i];
    }
    
    return -1;
};