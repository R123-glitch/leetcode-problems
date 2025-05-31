class Solution {
public:
    bool isPerfectSquare(int num) {
        int x;
        if (num<0) return false;
        
         x= sqrt(num);
            
        
        return int(x*x)==num;
        
    }
};