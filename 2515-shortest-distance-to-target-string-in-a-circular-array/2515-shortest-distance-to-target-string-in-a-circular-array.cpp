class Solution {
public:

    int closestTarget(vector<string>& words, string target, int si) {
        int n=words.size();
        bool found=false;
        for(string &ch:words){
            if(ch==target){
                found=true;
                break;
            }    
        }
        if(!found) return -1;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int fi=(si+i)%n;
            int bi=(si-i+n)%n;
            if(words[fi]==target){
                ans=min(ans,i);
            }
             if(words[bi]==target){
                ans=min(ans,i);
            }
        }
        return ans;
        
    }
};