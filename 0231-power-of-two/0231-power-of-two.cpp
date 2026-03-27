class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        string binary = "";
        int temp = n;

        while (temp > 0) {
            binary = char((temp % 2) + '0') + binary;
            temp = temp / 2;
        }

        int count = 0;
        for (int i = 0; i < binary.length(); i++) {
            if (binary[i] == '1') {
                count++;
            }
        }

        return count == 1;
    }
};