#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void solve() {
    int h, n;
    cin >> h >> n;

    vector<int> damage(n);
    vector<int> cooldown(n);

    for (int i = 0; i < n; ++i) {
        cin >> damage[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> cooldown[i];
    }

    int turn = 0;
    int current_health = h;

    // Cooldown counter for each attack
    vector<int> cd_counter(n, 0);

    while (current_health > 0) {
        turn++;
        int total_damage = 0;

        for (int i = 0; i < n; ++i) {
            if (cd_counter[i] == 0) {
                total_damage += damage[i];
                cd_counter[i] = cooldown[i]; // set cooldown
            }
        }

        // Reduce cooldown counters for the next turn
        for (int i = 0; i < n; ++i) {
            if (cd_counter[i] > 0) {
                cd_counter[i]--;
            }
        }

        // Apply total damage to the boss
        current_health -= total_damage;
    }

    cout << turn << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
