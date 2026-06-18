class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle = 0;

        angle = hour * 30;

        double angleMin = minutes * 6;
        double temp = abs(angleMin - (angle + minutes * 0.5));
        cout << temp << "\n";
        double mini = min(temp, 360 - temp);
        return mini;
    }
};