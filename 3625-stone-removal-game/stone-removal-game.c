bool canAliceWin(int n) {
    if(n < 10){
        return false;
    }
    int take = 10;
    int winner;
    
    for(int i = 0; i < 10; i++){
        if(n - take >= 0){

            n = n - take;
            take--;
            if(i % 2 == 0){
                winner = 1;
            }
            else{
                winner = 0;
            }
        }
    }

    if(winner == 1){
        return true;
    }
    return false;

}