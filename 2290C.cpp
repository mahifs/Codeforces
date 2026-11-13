#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long h;

        vector<long long> v;

        for (int i = 0; i < n; i++) {
            cin >> h;
            v.push_back(h);
        }

        int cnt = 0;

        sort(v.begin(), v.end());

        vector<long long> dups;
        for (int i = 1; i < v.size(); i++) 
            if (v[i] == v[i-1]) dups.push_back(v[i]);

        v.erase(unique(v.begin(), v.end()), v.end());

        cnt += v.size();

        sort(dups.begin(), dups.end());
        vector<long long> u = dups;
        int cnt1 = unique(u.begin(), u.end()) - u.begin();

        if (cnt1 == 0 && cnt != n) cnt += 1;
        else {
            cnt += cnt1;
        }

        cout << cnt << endl;
        for (auto u : v) cout << u << " ";

        for (int i = dups.size()-1; i >= 0; i--) cout << dups[i] << " ";

        cout << endl;
    }

    return 0;
}