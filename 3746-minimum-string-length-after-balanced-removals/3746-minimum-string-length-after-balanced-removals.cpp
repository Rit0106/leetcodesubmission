class Solution {
public:
    int minLengthAfterRemovals(string s) {
       
        int n=s.size();
        stack<char>sta;
        
        for(char ch:s){
            if(!sta.empty() &&
                ((sta.top()=='a' && ch=='b') ||
                (sta.top()=='b' && ch=='a'))){
                    sta.pop();
                }
                else{
                    sta.push(ch);
                }
            } 
            return sta.size();
        }

        
    
};