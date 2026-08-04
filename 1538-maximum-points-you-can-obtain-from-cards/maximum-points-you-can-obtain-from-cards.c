int maxScore(int* cardPoints, int cardPointsSize, int k) {

    int minimum = cardPointsSize - k;

    int sum = 0;

    for(int i = 0; i < cardPointsSize; i++){
        sum = sum + cardPoints[i];
    }
    int windowsum = 0;

    for(int i = 0; i <minimum; i++){
        windowsum = windowsum + cardPoints[i];
    }

    int minsum = windowsum;

    for(int i = minimum; i < cardPointsSize; i++){

        windowsum += cardPoints[i];
        windowsum -= cardPoints[i - minimum];

        if(windowsum < minsum){
            minsum = windowsum;
        }



    }

    return sum - minsum;




    
}