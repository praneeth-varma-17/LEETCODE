bool judgeSquareSum(int c) {



    long long root = (int)sqrt(c);

    long long a = 0;

    while(a <= root){

        long long ans = (a*a) + (root * root);
        if(ans ==  c){
            return true;
        }
        else if(ans >  c){
            root--;
        }
        else if(ans <  c){
            a++;
        }

    }

    return false;
    
}