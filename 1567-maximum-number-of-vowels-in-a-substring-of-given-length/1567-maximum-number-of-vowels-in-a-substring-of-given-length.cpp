class Solution {
public:
bool isvowel(char ch ){
    ch=tolower(ch);
    return (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u');
}
    int maxVowels(string s, int k) {
        int n=s.size();
        int cnt=0;
        int maxcnt=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])) cnt++;
           maxcnt=cnt;
           
        }
         for(int i=k; i<n;i++){
            if(isvowel(s[i])) cnt++;
            if(isvowel(s[i-k])) cnt--;
            maxcnt=max(maxcnt,cnt);


            }
            return maxcnt;
        
        
        
    }
};