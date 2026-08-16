int countHousePlacements(int n) {
    long long MOD = 1e9 + 7;
    if (n == 1) return 4;
    if (n == 2) return 9;
    
    long long first = 2;  
    long long second = 3; 
    long long current = 0;
    
    for (int i = 3; i <= n; i++) {
        current = (first + second) % MOD;
        first = second;
        second = current;
    }

    return (int)(((long long)second * second) % MOD);
}
