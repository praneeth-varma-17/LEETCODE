int og(int n){
    int count = 0;
    int num = n;


    while(num > 0){
        num = num /10;
        count++;
    }

    int arr[count];

    int index = 0;

    while(n > 0){
        int rem = n % 10;
        arr[index] = rem;
        n = n/10;
        index++;
    }

    int max = INT_MIN;

    for(int i = 0; i < count; i++){
        if(arr[i] > max){
            max = arr[i];
        }

    }

    if(count == 1){
        return max;
    }
    if(count == 2){
        return 11*max;
    }
    if(count == 3){
        return 111*max;
    }
    if(count == 4){
        return 1111*max;
    }

    return 0;
}

int sumOfEncryptedInt(int* nums, int numsSize) {

    int sum = 0;

    for(int i = 0; i < numsSize; i++){

        int current = og(nums[i]);

        sum = sum + current;


    }

    return sum;

    
}