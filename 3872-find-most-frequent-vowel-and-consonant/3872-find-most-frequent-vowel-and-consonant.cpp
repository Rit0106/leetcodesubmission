class Solution {
public:
    int maxFreqSum(string s) {
        int ans=0;
        int n=s.size();
        int maxvow=0;
        int maxcons=0;
        int freq[26];

        for(char c:s){
            int i=c-'a';
            freq[i]++;
            if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'){
                maxvow=max(maxvow,freq[i]);
            }
            else{
                maxcons=max(maxcons, freq[i]);
            }

        }
        ans=maxvow+maxcons;
        return ans;

        
    }
};