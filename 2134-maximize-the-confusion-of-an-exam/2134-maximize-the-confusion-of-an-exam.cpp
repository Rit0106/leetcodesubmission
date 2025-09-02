class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int l=0,r=0;
        int ans=0;
        int tcnt=0,fcnt=0;
        
        while(r<n){
           
            if( answerKey[r]=='T')
            tcnt++;
            if(answerKey[r]=='F')
            fcnt++;
            while(tcnt>k && fcnt>k){
                if(answerKey[l]=='T')
                tcnt--;
                if(answerKey[l]=='F')
                fcnt--; 
                l++;

            }
            ans=max(ans,r-l+1);
            r++;
            
        }
        return ans;
        
    }
};