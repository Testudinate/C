#include <iostream>
#include <algorithm>
using namespace std;
struct Otr {
    int l;
    int r;
};
bool otr(Otr ai, Otr bi);
int main() {
    int n;
    cin >> n;
    Otr a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i].l >> a[i].r;
    sort(a, a + n, otr);
    int cnt = 1;
    int m[n];
    fill(m, m + n, 0);
    m[cnt - 1] = a[0].r;
    int i = 1;
    while (i < n) {
        while ((i < n) && (a[i].l <= m[cnt - 1]))
            i++;
        if (i < n) {
            cnt++;
            m[cnt - 1] = a[i].r;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i)
		cout << m[i] << " " << endl;
    return 0;
}

bool otr(Otr ai, Otr bi) {
    return ai.r < bi.r;
}
