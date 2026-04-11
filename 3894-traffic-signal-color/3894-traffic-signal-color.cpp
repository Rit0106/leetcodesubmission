class Solution {
public:
    string trafficSignal(int timer) {
        int n=timer;
        if(n==0) return "Green";
        else if(n==30) return "Orange";
        else if(n>30 && n<=90) return "Red";
        else return "Invalid";
        
    }
};