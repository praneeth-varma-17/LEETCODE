int peakIndexInMountainArray(int* arr, int arrSize) {


    int index = 0;

    int found = 0;

    while(found != 1){
        if(arr[index] > arr[index + 1]){
            found = 1;
        }
        else{
            index++;
        }
    }

    return index;
    
}