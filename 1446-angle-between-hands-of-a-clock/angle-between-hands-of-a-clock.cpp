class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour*=30;
        double mins=minutes*6;
        // 360/(12*60) 12 *60 as 360 true for every hour and for every minute it is  time 60  so this is add on hours 0.5
        double teta=abs(hour + 0.5*minutes - mins);
        return min(teta,360-teta);
// h=12 m=30
// h=12x30 =360
//mins =mx6 =30x6=180
//add on = 0.5xm =0.5x30=15
//teta=> h+add on - mins =360 +15 -180 =180+15 =195 >180 we need to return min retrun 360-teta 360-195 =165  
    }
};