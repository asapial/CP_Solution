#include <bits/stdc++.h>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))



int sumOfMultiples(int x, int n) {
    int k = n / x; 
    return x * (k * (k + 1)) / 2; 
}

int main() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int maxSum = 0;
        int optimalX = 2;

        for (int x = 2; x <= n; ++x) {
            int currentSum = sumOfMultiples(x, n);
            if (currentSum > maxSum) {
                maxSum = currentSum;
                optimalX = x;
            }
        }

        results[i] = optimalX;
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
