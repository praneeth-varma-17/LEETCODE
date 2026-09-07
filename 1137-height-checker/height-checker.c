int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int heightChecker(int* heights, int heightsSize) {
    int temp[heightsSize];

    for(int i = 0; i < heightsSize; i++){
        temp[i] = heights[i];
    }

    qsort(temp, heightsSize, sizeof(int), compare);

    int asn = 0;

    for(int i = 0; i < heightsSize; i++){
        if(temp[i] != heights[i]){
            asn++;
        }

    }

    return asn;

}