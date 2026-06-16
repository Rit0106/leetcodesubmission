class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k=flowerbed.size();
        int cnt=0;
        for(int i=0;i<k;i++){
            if(flowerbed[i]==0){
                bool lemp=(i==0 || flowerbed[i-1]==0);
                bool remp=(i==k-1 || flowerbed[i+1]==0);
                if(lemp && remp){
                    flowerbed[i]=1;
                    cnt++;
                }
            }
        }
       return cnt>=n;
    }
};