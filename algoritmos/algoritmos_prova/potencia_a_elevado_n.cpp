// (i) Método Iterativo por multiplicações sucessivas - O(n) 
double potenciaIterativa(double a, int n) {
    double resultado = 1.0;
    for (int i = 0; i < n; i++) {
        resultado *= a;
    }
    return resultado;
}

// (ii) Método Recursivo simples - O(n) 
double potenciaRecursiva(double a, int n) {
    if (n == 0) return 1.0;
    return a * potenciaRecursiva(a, n - 1);
}

// (iii) Algoritmo Ótimo (Exponenciação Binária) - O(log n) 
double potenciaOtima(double a, int n) {
    if (n == 0) return 1.0;
    double metade = potenciaOtima(a, n / 2);
    
    if (n % 2 == 0) 
        return metade * metade; // n é par
    else 
        return a * metade * metade; // n é ímpar
}