#include <iostream>
#include <cstdio>
using namespace std;

long long fibonacci(int N) {

    long long fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= N; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[N];
}


int main() {

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {

        int N;
        cin >> N;

        cout << "Fib(" << N << ") = " << fibonacci(N) << endl;
    }

    return 0;
}