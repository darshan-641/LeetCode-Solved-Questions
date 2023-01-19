function arithmeticTriplets(nums: number[], diff: number): number {
        
        let count  = 0;
        let size = nums.length;
    
        for( let i = 0; i<=size-3; i++){
            
            for( let j = i+1; j<size; j++){
                for( let k = j+1; k<size; k++){
                    
                    if( nums[j] - nums[i] == diff && nums[k] - nums[j] == diff) count++;
                }
            }
        }
    
    return count;
};