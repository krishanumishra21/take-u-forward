class Solution {
public:
    int factorial(int n) {
        if (n == 0) return 1;

        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    int pascalTriangleI(int r, int c) {
        return factorial(r-1) / (factorial(c-1) * factorial(r-c));
    }
};