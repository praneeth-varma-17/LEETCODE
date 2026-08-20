int maxDivScore(int* nums, int numsSize, int* divisors, int divisorsSize) {
    int max_score = -1;
    int best_div = -1;
    for (int i = 0; i < divisorsSize; i++) {
        int score = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] % divisors[i] == 0) {
                score++;
            }
        }
        if (score > max_score || (score == max_score && divisors[i] < best_div)) {
            max_score = score;
            best_div = divisors[i];
        }
    }
    return best_div;
}
