int findFinalValue(int* nums, int numsSize, int original) {

    int ans = original;
    int found = 1;
    int num = original;

    while(found != 0){
        int net_found = 0;
        for(int i = 0; i < numsSize; i++){

            
            if(nums[i] == num){
                ans = num * 2;
                net_found = 1;
                num = ans;

            }

            
        }

        if(net_found == 0){
            found = 0;
        }
    }

    return ans;
    
}