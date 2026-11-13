#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

            vector<long long> v(n);
            for (auto &x : v) cin >> x;
            sort(v.begin(), v.end());

            vector<long long> left, right, mid;

            for (int i = 0; i < n; ) {
                int j = i;
                while (j < n && v[j] == v[i]) j++;
                int c = j - i;

                left.push_back(v[i]);
                if (c >= 2) right.push_back(v[i]);
                for (int k = 0; k < c-2; k++) mid.push_back(v[i]);
                i = j;
            }

            cout << left.size() + right.size() << '\n';

            for (auto x : left) cout << x << ' ';
            for (auto x : mid) cout << x << ' ';
            for (int i = (int)right.size()-1; i >= 0; i--) cout << right[i] << ' ';

            cout << '\n';
    }

    return 0;
}