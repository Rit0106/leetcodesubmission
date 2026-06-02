class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();
        int mintime=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int landstart=landStartTime[i];
                int landdur= landDuration[i];
                int waterstart=waterStartTime[j];
                int waterdur= waterDuration[j];   
                int start1=landstart;
                int end1=landstart+landdur;
                int start2=max(end1,waterstart);
                int end2=start2+waterdur;

                mintime=min(mintime,end2);

                start1=waterstart;
                end1=start1+waterdur;
                start2=max(end1,landstart);
                end2=start2+landdur;

                mintime=min(mintime,end2);  
                
            }
        }
        return mintime;
        
    }
};