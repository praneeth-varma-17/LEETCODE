int findLucky(int* arr, int arrSize) {

    int count[501] = {0};
    int lucky = -1;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] >= 1 && arr[i] <= 500) {
            count[arr[i]]++;
        }
    }

    for (int i = 0; i < arrSize; i++) {
        int now;
        if(arr[i] == count[arr[i]]){
            now = arr[i];

        }
        if(now > lucky){
            lucky = now;
        }
        
    }

    return lucky;
}


    
