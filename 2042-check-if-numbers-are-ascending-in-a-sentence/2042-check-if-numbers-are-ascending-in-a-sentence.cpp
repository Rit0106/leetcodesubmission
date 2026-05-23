class Solution {
public:
    bool areNumbersAscending(string s) {
        int n=s.size();
        vector<int>nums;
            for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                int num=0;
                   while(i<n && isdigit(s[i])) {
                    num= num*10 + (s[i]-'0');
                    i++;
                }
                nums.push_back(num);

            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                return false;
            }
        }
        return true;
        
    }
};