/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countKDifference = function(nums, k) {
    let count  = 0;
    let size = nums.length;
    
    for( let i = 0; i<size; i++){
        
        for( let j = i+1; j<size; j++){
            
            if( Math.abs(nums[i] - nums[j]) == k) count++;
        }
    }
    
    return count;
};