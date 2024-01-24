class Solution {
public:
    int reverse(int x) {


       
    
    // Handle negative sign
      
    
    // Handle negative sign
    int sign = (x >= 0) ? 1 : -1;
    x = (x == INT_MIN) ? INT_MAX : abs(x);  // Special case for INT_MIN
    
    // Reverse the digits
    long long reversed_x = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Check for overflow
        if (reversed_x > (INT_MAX - digit) / 10) {
            return 0;
        }

        reversed_x = reversed_x * 10 + digit;
    }

    return static_cast<int>(sign * reversed_x);
        
    }
};