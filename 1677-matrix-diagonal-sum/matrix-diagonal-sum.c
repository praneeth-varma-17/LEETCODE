int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;

    for(int i = 0; i < matSize; i++){
        sum = sum + mat[i][i];
        sum = sum + mat[i][matSize - 1 -i];
            
    }
    if(matSize % 2 == 0){
        return sum;
    }
    int x = matSize/2;

    sum = sum - mat[x][x];

    return sum;
    
}