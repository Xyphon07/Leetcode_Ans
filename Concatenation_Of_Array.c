/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <string.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int* result = malloc(*returnSize * sizeof(int));
    if (result == NULL) {
        return NULL;
    }
    memcpy(result, nums, numsSize * sizeof(int));
    memcpy(result + numsSize, nums, numsSize * sizeof(int));
    
    return result;
}
#Runtime => 0ms Beats100.00%
#Memory => 15.01MB Beats66.25%

