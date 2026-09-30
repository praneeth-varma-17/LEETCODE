bool uniqueOccurrences(int* arr, int arrSize) {
    int freq[2001] = {0};

    for(int i = 0; i < arrSize; i++){
        freq[arr[i] + 1000]++;
    }

    for(int i = 0; i < 2001; i++){
        if(freq[i] ==  0){
            continue;
        }
        else{
            for(int j = 0; j < 2001; j++){
                if(i != j && freq[i] == freq[j]){
                    return false;
                }
            }
        }
    }
    return true;
}