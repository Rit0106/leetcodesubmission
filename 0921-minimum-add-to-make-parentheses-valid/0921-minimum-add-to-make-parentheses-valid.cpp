class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int n=s.size();
        int openb=0;
        int closeb=0;
        for(char ch:s){
            if(ch=='('){
                openb++;
            }
            else if(openb>0){
                    openb--;
            }
            else {
                closeb++;
            }
            
        }
       
        return openb+closeb;
    }
};