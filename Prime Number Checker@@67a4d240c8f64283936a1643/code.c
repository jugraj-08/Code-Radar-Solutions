int isPrime(int n) {
    if (n <= 1) return 0; // Numbers <= 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // If divisible, not prime
    }
    return 1; // Otherwise, prime
}