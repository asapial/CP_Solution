


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int query(const string& t) {
    cout << "? " << t << endl;
    cout.flush();  // Flush the output buffer
    int response;
    cin >> response;
    return response;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string password="";  // Initialize the password string
        
        // First, check for single characters
        int hasZero = query("0");
        //int hasOne = query("1");

        // Set the first character
        password[0] = hasZero ? '0' : '1';

        // Build the password by querying substrings
        for (int i = 1; i < n; i++) {
            string prefix = password.substr(0, i);
            // Check if appending '0' or '1' gives a valid substring
            if (query(prefix + "0")) {
                password[i] = '0';
            } else {
                password[i] = '1';
            }
        }

        // Output the final password
        cout << "! " << password << endl;
        cout.flush();  // Flush the output buffer
    }
}

int main() {
    solve();
    return 0;
}