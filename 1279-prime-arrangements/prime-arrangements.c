

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int numPrimeArrangements(int n) {
    long long MOD = 1000000007;
    int numPrimes = 0;
    
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            numPrimes++;
        }
    }
    
    int numNonPrimes = n - numPrimes;
    long long result = 1;
    
    for (int i = 1; i <= numPrimes; i++) {
        result = (result * i) % MOD;
    }
    
    for (int i = 1; i <= numNonPrimes; i++) {
        result = (result * i) % MOD;
    }
    
    return (int)result;
}
