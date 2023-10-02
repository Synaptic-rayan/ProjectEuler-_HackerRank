#include<bits/stdc++.h>
int main() {
    long long int n, t, sum;
    std::cin >> t;
    while (t--) {
        sum = 0;
        std::cin >> n;
        
        n--;  
        
        if (n >= 3) {
            long long int mulThree = n / 3;
            sum += 3 * mulThree * (mulThree + 1) / 2;
        }

        if (n >= 5) {
            long long int mulFive = n / 5;
            sum += 5 * mulFive * (mulFive + 1) / 2;
        }

        // Remove duplicates
        if (n >= 15) {
            long long int mulFifteen = n / 15;
            sum -= 15 * mulFifteen * (mulFifteen + 1) / 2;
        }
        std::cout << sum << std::endl;
    }
    return 0;
}