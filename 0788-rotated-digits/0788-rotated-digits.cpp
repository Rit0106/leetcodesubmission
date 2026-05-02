class Solution {
public:
    bool isgood(int n){
        bool change=false;
        while(n>0){
            int d=n%10;
            if(d==3 ||d==4 || d==7){
                return false;
            }
            if(d==2 || d==5 ||d==6 ||d==9){
                change=true;

            }
            n/=10;
        }
        return change;
    }
    int rotatedDigits(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if(isgood(i))
            ans++;
        }
        return ans;
        
    }
};