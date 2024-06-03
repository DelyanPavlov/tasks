#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int A[N], B[N], C[N], D[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        cin >> B[i];
        cin >> C[i];
        cin >> D[i];
    }

    for (int i = 0; i < N; i++) {
        if ((A[i] + B[i]) == (C[i] + D[i])) {
            cout << A[i] << B[i] << C[i] << D[i] << endl;
        }
    }

    return 0;
}
