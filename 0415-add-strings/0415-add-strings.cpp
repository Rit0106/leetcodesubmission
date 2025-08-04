class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        if(num1=="0" && num2=="0") return "0";
        string result="";
        int i=n-1;
        int j=m-1;
        int carry=0;
        while(i>=0 || j>=0 || carry){
            int n1=(i>=0) ? num1[i--] -'0':0;
            int n2=(j>=0) ? num2[j--]-'0':0;
             
            int sum=n1+n2+carry;
            carry=sum/10;
            result+=sum%10+'0'; 
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};