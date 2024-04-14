/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if( s.length != t.length) return false;
    
    const count = {    };
    
    for( let a of s){
        count[a] = (count[a] || 0) + 1;
    }
    
    for( let a of t){
        
        if( (!count[a])) return false;
        count[a]--;
    }
    
    return true;
};