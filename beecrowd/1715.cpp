#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    int contagem_jogadores = 0;
    
    for (int i = 0; i < N; i++) {
        bool fez_todos_gols = true;

        for (int x = 0; x < M; x++) {

            int X;
            cin >> X;

            if (X == 0) {
                fez_todos_gols = false;
            }
        }
        if (fez_todos_gols == true) {
            contagem_jogadores++;
        }
    }

    cout << contagem_jogadores << endl;

    return 0;
}