int count(int n, int digit){
    int num = 0;

    while(n > 0){
        int rem = n % 10;
        if(rem == digit){
            num++;
        }
        n = n/10;
    }

    return num;
}

int countDigitOccurrences(int* nums, int numsSize, int digit) {


    int cnt = 0;

    for(int i = 0; i < numsSize; i++){
        int ans = count(nums[i], digit);
        cnt = cnt + ans;
    }

    return cnt;


    
}