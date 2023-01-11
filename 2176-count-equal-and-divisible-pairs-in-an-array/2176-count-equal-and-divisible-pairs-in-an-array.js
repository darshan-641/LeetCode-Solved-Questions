/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countPairs = function(nums, k) {
    
    let count = 0;
    let size = nums.length;
    
    for( let i = 0; i<size; i++){
        
        for( let j = i+1; j<size; j++){
            
            if( (nums[i] == nums[j]) && (i*j)%k == 0) count++;
        }
    }
    
    return count;
};