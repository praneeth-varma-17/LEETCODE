long long countCommas(long long n) {

    if(n < 1000)
        return 0;

    long long ans = 0;

    if(n <= 999999)
        return n - 999;

    ans = 999999 - 999;

    if(n <= 999999999)
        return ans + (n - 999999) * 2;

    ans += (999999999 - 999999) * 2;

    if(n <= 999999999999LL)
        return ans + (n - 999999999) * 3;

    ans += (999999999999LL - 999999999) * 3;


    if(n <= 999999999999999LL)
        return ans + (n - 999999999999LL) * 4;

    ans += (999999999999999LL - 999999999999LL) * 4;

    // 1,000,000,000,000,000 to ...
    return ans + (n - 999999999999999LL) * 5;
}