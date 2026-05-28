class Solution {
public:
    string capitalizeTitle(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            int start=i;
            while(i<n && s[i]!=' '){
                s[i]=tolower(s[i]);
                i++;
            }
            int len=i-start;
            if(len>2){
                s[start]=toupper(s[start]);
            }
        }
        return s;
    }
};