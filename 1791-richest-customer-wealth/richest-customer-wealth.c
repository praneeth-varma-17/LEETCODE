int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {

    int maxWealth = 0;
    int numRows = accountsSize;
    int numCols = accountsColSize[0];

    for(int i = 0; i < numRows; i++){
        int current = 0;
        for(int j = 0; j < numCols; j++){
            current = current + accounts[i][j];

        }

        if(maxWealth < current){
            maxWealth = current;
        }
    }

    return maxWealth;
    
}