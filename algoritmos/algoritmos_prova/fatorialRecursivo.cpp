long long fatorialRecursivo(int n) {
    if (n <= 1) return 1;
    return n * fatorialRecursivo(n - 1);
}