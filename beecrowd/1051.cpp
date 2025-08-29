#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double salario;
    cin >> salario;

    double salario_imposto1 = 0.0;
    double salario_imposto2 = 0.0;
    double salario_imposto3 = 0.0;

    if (salario <= 2000.0) {
        cout << "Isento" << endl;
    }
    
    else if (salario <= 3000.0) {
        salario_imposto1 = (salario - 2000.0) * 0.08;
        printf("R$ %.2f\n", salario_imposto1);
    }
    
    else if (salario <= 4500.0) {
        salario_imposto1 = 1000.0 * 0.08;
        salario_imposto2 = (salario - 3000.0) * 0.18;
        printf("R$ %.2f\n", salario_imposto1 + salario_imposto2);
    }
    
    else {
        salario_imposto1 = 1000.0 * 0.08;
        salario_imposto2 = 1500.0 * 0.18;
        salario_imposto3 = (salario - 4500.0) * 0.28;
        printf("R$ %.2f\n", salario_imposto1 + salario_imposto2 + salario_imposto3);
    }

    return 0;
}
