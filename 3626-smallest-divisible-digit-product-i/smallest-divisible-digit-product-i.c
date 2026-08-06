int product(int n){
    int num = n;
    int pro = 1;

    while(num > 0){
        int rem = num % 10;
        pro = pro * rem;
        num = num/10;
    }

    return pro;
}


int smallestNumber(int n, int t) {

    int found = 0;

    while(found != 1){
        int ans = product(n);
        if(ans % t == 0){
            found = 1;
        }
        else{
            n++;
        }
    }

    return n;
    
}