class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour*=30;
        double m=minutes*5.5;
        double teta= abs(hour-m);
        // cout<<teta<<endl<<hour<<endl<<m;
        if(teta>180 ){
            return 360-teta;
        }
        return teta;
    }
};