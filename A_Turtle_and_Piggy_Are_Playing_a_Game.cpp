// #include <iostream>
// #include <cmath>
// using namespace std;

// // Function to calculate the maximum score for a single test case
// int maxScore(int l, int r) {
//     int max_score = 0;
//     // Find the largest power of 2 <= r
//     int power = 1;
//     while (power <= r) {
//         power *= 2;
//     }
//     power /= 2;

//     // Ensure this power is within the range [l, r]
//     if (power >= l) {
//         // Calculate the score, which is the exponent of the power of 2
//         int score = 0;
//         while (power > 1) {
//             power /= 2;
//             score++;
//         }
//         max_score = score;
//     }

//     return max_score;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int l, r;
//         cin >> l >> r;
//         cout << maxScore(l, r) << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <cmath>
using namespace std;


long long int maxScore(long long int l, long long int r) {
    long long max_score = 0;

    long long int power = 1;
    while (power <= r) {
        power *= 2;
    }
    power /= 2;

    if (power >= l) {
    
        int score = 0;
        while (power > 1) {
            power /= 2;
            score++;
        }
        max_score = score;
    }

    return max_score;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int l, r;
        cin >> l >> r;
        cout << maxScore(l, r) << endl;
    }
    return 0;
}
