class Solution {
public:
    double angleClock(int hour, int minutes) {
        double m = minutes*6 ; 
        double h = hour*30 + minutes*0.5 ; 

        double dif = abs(m-h);
        double small = 360-dif ; 

        return min(dif , small) ; 
    }
};