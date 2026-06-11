class Solution {
public:
    bool isvowel(char ch){
        ch=tolower(ch);
        return ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i';
    }
    string reverseVowels(string s) {
        int n=s.size();
        
        int l=0;
        int r=n-1;
        while(l<r){
            while(l<r && !isvowel(s[l]))
                l++;
            while(l<r && !isvowel(s[r]))
                r--;

            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;

        
    }
};