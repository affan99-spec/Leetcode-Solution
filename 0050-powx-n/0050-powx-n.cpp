class Solution {
public:
    double myPow(double x, int n) {
        double a;
        if(x != 0 && n > 0){
            a = pow(x,n);
        }
        return a;
    }
};