class Solution {
public:
int finddays(vector<int>& weights, int days){
    int n=weights.size();
    int day=1;
    int load=0;
    for(int w:weights){
        if((load+w)>days){
            day++;
            load=w;
        }
        else{
            load+=w;
        }
       
    }
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low=*max_element(weights.begin(),weights.end());
       int high=0;
       for(int num:weights){
        high+=num;
       }
       
        while(low<=high){
             int mid=low+(high-low)/2;
            int no_ofdays=finddays(weights, mid);
            if(no_ofdays>days){
               low=mid+1;
            }
            else{
                high=mid-1;
            }
           
        }
        return low;

        
    }
   
};