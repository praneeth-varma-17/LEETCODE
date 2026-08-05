int digitsum(int n){
    int num = n;
    int sum = 0;

    while(num > 0){
        int rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }

    return sum;
}

int squaresum(int n){
    int num = n;
    int sum = 0;

    while(num > 0){
        int rem = num % 10;
        sum = sum + (rem * rem);
        num = num / 10;
    }

    return sum;
}

bool checkGoodInteger(int n) {

    int sum = digitsum(n);
    int square_sum = squaresum(n);

    if(square_sum - sum >= 50 ){
        return true;
    }

    return false;


    
}