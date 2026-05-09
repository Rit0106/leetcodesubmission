class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0;
        int cntr=0;
        int i=0;
        int n=events.size();
        while(i<n && cntr<10){
            if(events[i]=="NB"){
                score++;
            }
            else if(events[i]=="WD"){
                score++;
            }
            else if(events[i]=="W"){
                cntr++;
            }
            else{
                char c=events[i][0];
                score+=c-'0';
            }
            i++;
        }
        return {score,cntr};
        
    }
};