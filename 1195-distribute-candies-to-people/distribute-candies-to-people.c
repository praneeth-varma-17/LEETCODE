#include <stdlib.h>
#include <math.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* distributeCandies(int candies, int num_people, int* returnSize) {
    *returnSize = num_people;
    int* result = (int*)calloc(num_people, sizeof(int));
    if (result == NULL) return NULL;

    int loops = 0;
    while (candies > 0) {
        for (int i = 0; i < num_people; i++) {
            int expected = loops * num_people + (i + 1);
            if (candies >= expected) {
                result[i] += expected;
                candies -= expected;
            } else {
                result[i] += candies;
                candies = 0;
                break;
            }
        }
        loops++;
    }

    return result;
}
