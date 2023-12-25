class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();  // Get the size of the vector
        int carry = 1;  // Initialize carry to 1 because we want to increment the number by 1

        // Loop through the digits from right to left
        for (int i = n - 1; i >= 0; --i) {
            int sum = digits[i] + carry;  // Add the current digit and the carry
            digits[i] = sum % 10;  // Update the current digit with the remainder of the sum
            carry = sum / 10;  // Update the carry with the quotient of the sum
        }

        // If there is still a carry after processing all digits, add it as a new most significant digit
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};