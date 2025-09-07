class Solution {
public:
    bool isPerfectSquare(int num) {
         int i=1;
      int j=num/2;
      if(num==1){
        return true;
      }
      while(i<=j){
        long long int m=(i+j)/2;
        if(m*m==num){
            return true;
        }
        else if(m*m>num){
            j=m-1;
        }
        else{
            i=m+1;
        }
      }  
      return false;
        
    }
};