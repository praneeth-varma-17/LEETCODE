int sum(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum = sum + rem;
        n = n/10;
    }

    return sum;
}

int pro(int n){
    int pro = 1;
    while(n > 0){
        int rem = n % 10;
        pro = pro * rem;
        n = n/10;
    }

    return pro;
}


bool checkDivisibility(int n) {

    int su = sum(n);
    int prod = pro(n);

    if(n % (su+ prod) == 0){
        return true;
    }

    return false;
    
}