void merge(int* nums, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = nums[left + i];

    for (int i = 0; i < n2; i++)
        R[i] = nums[mid + 1 + i];

    int i = 0, j = 0, k = left;


    while (i < n1 && j < n2) {
        if (L[i] >= R[j])
            nums[k++] = L[i++];
        else
            nums[k++] = R[j++];
    }

    while (i < n1)
        nums[k++] = L[i++];

    while (j < n2)
        nums[k++] = R[j++];
}

void mergeSort(int* nums, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);

    merge(nums, left, mid, right);
}
double minPrice(int* prices, int pricesSize, int* discounts, int discountsSize) {

    double total = 0.0;

    mergeSort(prices, 0, pricesSize - 1);
    mergeSort(discounts, 0, discountsSize - 1);

    int minSize = pricesSize < discountsSize ? pricesSize : discountsSize;

    for (int i = 0; i < minSize; i++) {
        total += prices[i] * (100.0 - discounts[i]) / 100.0;
    }

    for (int i = minSize; i < pricesSize; i++) {
        total += prices[i];
    }

    return total;
}