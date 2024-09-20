#include <bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 1000006
#define MAX1 10000008
#define mem(a, v) memset(a, v, sizeof(a))
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))

vector<bool> sieve(MAX, true);
vector<ll> primeSquares;

void generatePrimes() {
    sieve[0] = sieve[1] = false;  
    for (int i = 2; i * i < MAX; i++) {
        if (sieve[i]) {
            for (int j = i * i; j < MAX; j += i) {
                sieve[j] = false;
            }
        }
    }
    // Push squares of primes into the primeSquares vector
    for (ll i = 2; i < MAX; i++) {
        if (sieve[i] and i*i<=1e12) {
            primeSquares.push_back((ll)i * i);  // Store p^2 for each prime p
        }
    }
}

void solve() {
    ll n;
    cin >> n;


    ll prevPrime=lower_bound(primeSquares.begin(),primeSquares.end(),n);
    ll nextPrime=prevPrime;

    if(prevPrime!=n and prevPrime!=primeSquares[0])
    {
        next
    }


    cout << min(nextDist, prevDist) << endl;
}

bool test = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    generatePrimes();  // Generate prime squares once before input

    int term = 1;
    if (test) cin >> term;
    while (term--) {
        solve();
    }
    return 0;
}
