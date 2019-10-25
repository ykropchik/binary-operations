#include <iostream>

using namespace std;

int main() {
    /*
     * First
     */
    unsigned short int n = 0;
    cout << "First task" << "\n";
    cin >> n;
    cout << (1 << n) << "\n";

    /*
     * Second
     */
    cout << "Second task" << "\n";
    unsigned short int a = 0;
    cin >> a;
    for (int i = sizeof(a)*8 - 1; i >= 0; i--){
        cout << ((a & (1 << i)) >> i);
    }
    cout << "\n";

    /*
     * Third
     */
    cout << "Third task" << "\n";
    unsigned short int b = 0;
    unsigned short int count = 0;
    cin >> b;
    for (int i = sizeof(b)*8 - 1; i >= 0; i--){
        if ((b & (1 << i)) >> i == 1){
            count++;
        };
    }
    cout << count << "\n";

    /*
     * Fourth
     */
    cout << "Fourth task" << "\n";
    unsigned short int k = 0;
    unsigned short int l = 0;
    unsigned short int m = 16;
    cin >> k;
    while (l != 1) {
        m--;
        l = ((k & (1 << m)) >> m);
    }
    cout << m << "\n";

    /*
     * Fifth
     */
    cout << "Fifth task" << "\n";
    unsigned short int c = 0, d = 0;
    cin >> c >> d;
    cout << (c | (1 << d)) << "\n";

    /*
     * Sixth
     */
    cout << "Sixth task" << "\n";
    unsigned short int e = 0, f = 0;
    cin >> e >> f;
    cout << (e & (65535 ^ (1 << f))) << "\n";

    /*
     * Seventh
     */
    cout << "Seventh task" << "\n";
    unsigned short int g = 0, h = 0;
    cin >> g >> h;
    cout << (g ^ (1 << h)) << "\n";

    /*
     * Eighth
     */
    cout << "Eighth task" << "\n";
    unsigned short int j = 0;
    cin >> j;
    if ((j & (1 << 15)) >> 15 == 1){
        cout << (((j << 1) | 1) ^ (1 << 16)) << "\n";
    }
    else{
        cout << (j << 1) << "\n";
    }

    /*
     * Ninth
     */
    cout << "Ninth task" << "\n";
    unsigned short int p = 0;
    count = 0;
    cin >> p;
    for (int i = (sizeof(p)*8 - 1); i >= 0; i--) {
        if ((p & (3 << i)) >> i == 3) {
            count++;
        }
    };
    cout << count << "\n";

    /*
     * Tenth
     */
    cout << "Tenth task" << "\n";
    unsigned short int q = 0, r = 0, s = 0;
    cin >> q >> r >> s;
    cout << (q ^ ((1 << r) | (1 << s))) << "\n";

    /*
     * Eleventh
     */
    cout << "Eleventh task" << "\n";
    unsigned short int y = 0;
    unsigned short int z = 0;
    cin >> z >> y;
    cout << (((z >> (y + 1)) << y) | (z & ((1 << y) - 1))) << "\n";

    return 0;
}