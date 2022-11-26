class Solution {
public:
    bool judgeCircle(string moves) {
        
        int sky = 0;
        int earth = 0;
        
        for( int i =0 ;i<moves.size(); i++){
            
            
            
            switch (moves[i]) {
                case 'U' : sky++; break;
                case 'D' : sky--; break;
                case 'R' : earth++; break;
                case 'L' : earth--; break;
            }
            
            
            // if( moves[i] == 'U') sky++;
            // else if( moves[i] == 'D') sky--;
            // else if( moves[i] == 'L') earth++;
            // else earth--;
        }
        
        return (!sky && !earth);
    }
};