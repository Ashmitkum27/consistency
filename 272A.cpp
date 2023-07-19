#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int tf = 0;
    int c = 0;

    vector<int> f(n);
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    for (int i = 0; i < n; i++) {
        tf += f[i];
    }
    for (int i = 1; i <= 5; i++) {
        if ((tf + i) % (n + 1) != 1) {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
