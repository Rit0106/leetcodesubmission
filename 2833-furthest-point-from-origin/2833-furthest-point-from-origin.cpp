class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int l=0;
        int r=0;
        int b=0;
        for(char c:moves){
            if(c=='L') l++;
            else if(c=='R') r++;
            else b++;

        }
        return abs(l-r)+b;
        
    }
};