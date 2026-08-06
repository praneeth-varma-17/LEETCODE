int maximum(int a, int b){
    if(a > b){
        return a;
    }
    else if( b > a){
        return b;
    }

    return a;
}

bool canJump(int* nums, int numsSize) {

    int jump = 0;

    for(int i = 0; i <numsSize; i++){
        if(jump < i){
            return false;
        }

        jump = maximum(jump, i+nums[i]);

    }
    return true;
    
}