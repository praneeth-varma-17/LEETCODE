int ele(int n){
    int sum = 0;

    while(n > 0){
        int rem = n % 10;
        sum = sum + rem;
        n= n / 10;
    }

    return sum;
}

int differenceOfSum(int* nums, int numsSize) {

    int element = 0;
    int digit = 0;

    for(int i = 0; i < numsSize; i++){
        element = element + nums[i];
        digit = digit + ele(nums[i]);
    }

    return abs(digit - element);
    
}