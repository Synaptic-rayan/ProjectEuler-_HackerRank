#include <iostream>

int main() {
    long long int t, n;
    std::cin >> t;

    while (t--) {
        std::cin >> n;
        long long int a = 0, b = 1, ans = 0, sum = 0;

        while (true) {
            sum = a + b;
            if (sum >= n) {
                break;
            } else {
                if (sum % 2 == 0) {
                    ans += sum;
                }
                a = b;
                b = sum;
            }
        }

        std::cout << ans << std::endl;
    }

    return 0;
}

