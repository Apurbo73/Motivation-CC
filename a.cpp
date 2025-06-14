#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;

        int max_rating = 0;

        for (int i = 0; i < N; ++i) {
            int S, R;
            cin >> S >> R;
            if (S <= X) {
                if (R > max_rating) {
                    max_rating = R;
                }
            }
        }

        cout << max_rating << endl;
    }
    return 0;
}