int sumOfSquares(int* nums, int numsSize) {

    int arr[numsSize];
    int sum = 0;
    int x;

    for (int i = 0; i < numsSize; i++) {
        if (numsSize % (i + 1) == 0) {
            arr[i] = nums[i];
        } else {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        x = arr[i];
        sum += x * x;
    }

    return sum;
}