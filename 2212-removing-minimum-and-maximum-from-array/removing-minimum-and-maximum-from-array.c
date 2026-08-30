int high(int a, int b) {
    return (a > b) ? a : b;
}
int low(int a, int b) {
    return (a > b) ? b : a;
}

int max_3(int a, int b, int c){
    int min = b;
    if(a < min){
        min = a;

    }
    if(c < min){
        min = c;
    }

    return min;
}


int minimumDeletions(int* nums, int numsSize) {

    int min = INT_MAX;
    int min_i = 0;
    int max_i = 0;
    int max = INT_MIN;


    for(int i = 0; i < numsSize; i++){
        if(min > nums[i]){
            min = nums[i];
            min_i = i+1;
        }
        if(max < nums[i]){
            max = nums[i];
            max_i = i+1;
        }
    }
    int ohigh = high(max_i,min_i);
    int shigh = low(max_i,min_i);



    int sec_1 = ohigh;

    int sec_2 = numsSize - shigh + 1;

    int sec_3 = shigh + (numsSize - ohigh + 1);

    int ans = max_3(sec_1,sec_2,sec_3);

    return ans;





    
}