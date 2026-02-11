class Solution {
public:
    int countMonobit(int n) {
          if(n==1) return 2;  
        if(n ==0) return 1; 
        int cnt = 1;  
        int ans = 1;  
        while(ans <=n){
            ans = ans * 2 + 1;
            cnt++;
        }

        return cnt;
           
    }
};