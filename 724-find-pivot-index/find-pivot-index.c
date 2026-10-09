int pivotIndex(int* nums, int numsSize) {

    int pre[numsSize + 1];

    pre[0] = 0;
    int total = 0;

    for(int i = 0; i < numsSize; i++){
        pre[i+1] = pre[i] + nums[i];
        total = total + nums[i];
    } 
    int pivot = -1;

    for(int i = 0; i < numsSize; i++){
        if(pre[i] == total - pre[i]- nums[i]){
            pivot = i;
            break;
        }
    }

    return pivot;
    
}