class Solution {
public:
    bool checkPerfectNumber(int num) {
        int mid=num/2;
        vector<int>nums;
        for(int i=1;i<=mid;i++){
            if(num%i==0){
                nums.push_back(i);
            }
        }
        int sum=0;
        int m= nums.size();
        for(int i=0;i<m;i++){
             sum+=nums[i];
        }
        return sum==num;

        
    }
};