#include <iostream>
#include <vector>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
// Define direction arrays for up, down, left, right
const ll directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

void stabilizeMatrix(vector<vector<ll>>& matrix, ll n, ll m) {
    bool changed;
    do {
        changed = false;
        bool check=false;
        // Find the cell (i,j) that is strictly greater than all its neighbors
        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                bool is_peak = true;
                ll num=0;
                for (ll d = 0; d < 4; ++d) {
                    ll ni = i + directions[d][0];
                    ll nj = j + directions[d][1];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m ) {
                        
                       num=max(num,matrix[ni][nj]);
                    }
                  
                }
                if(num<matrix[i][j])
                {
                    matrix[i][j]=num;
                    check=true;

                }
            }
        }

        if(check==false)
        {
            break;
        }

    } while (changed);
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> matrix(n, vector<ll>(m));

        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        stabilizeMatrix(matrix, n, m);

        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
