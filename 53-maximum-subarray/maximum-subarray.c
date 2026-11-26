int max(int a, int b){
    if( a > b){
        return a;
    }
    return b;
}

int maxSubArray(int* nums, int numsSize) {


    int maxi = INT_MIN;


    int current = 0;

    for(int i = 0; i < numsSize; i++){
        current = max(nums[i], current+nums[i]);

        maxi = max(maxi, current);

    }
    return maxi;
}