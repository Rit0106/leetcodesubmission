
bool possible=false;
vector<int>v;
class Solution {
public:
void compute(){
     map<int,int>mp;
        for(int i=0;i<1000;i++){
            for(int j=i+1;j<=1000;j++){
                mp[i*i*i +j*j*j]++;
            }
        }
        for(auto &[num,freq] :mp){
            if(freq>1) v.push_back(num);
        }
        possible=true;
    }
    vector<int> findGoodIntegers(int n) {
        if(!possible) compute();
        vector<int>ans;
        for(int &num:v){
            if(num<=n) ans.push_back(num);
            else break;
        }
        return ans;
    }

};