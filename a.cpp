#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        int sum = 0;
        int m = 1;
        for (int i = 1; i <=a; i++) {
            m = m * i;
        }
        cout << m << endl;
    }
}