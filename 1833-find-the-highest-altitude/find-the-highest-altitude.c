int largestAltitude(int* gain, int gainSize) {

    int temp[gainSize + 1];
    int sum = 0;

    for(int i = 0; i <= gainSize; i++){
        if(i == 0){
            temp[i] = 0;
        }
        else{
            sum = sum + gain[i -1];
            temp[i] = sum;
        }
    }

    int max = INT_MIN;

    for(int i = 0; i < gainSize +1; i++){
        if(temp[i] > max){
            max = temp[i];
        }
    }

    return max;
    
}