class Solution {
public:
    bool judgeCircle(string moves) {
        
        int sky = 0;
        int earth = 0;
        
        for( int i =0 ;i<moves.size(); i++){
            
            if( moves[i] == 'U') sky++;
            else if( moves[i] == 'D') sky--;
            else if( moves[i] == 'L') earth++;
            else earth--;
        }
        
        return (!sky && !earth);
    }
};