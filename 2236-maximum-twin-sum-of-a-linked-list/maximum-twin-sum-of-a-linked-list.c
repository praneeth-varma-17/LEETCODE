/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {

    int count = 0;

    struct ListNode *temp = head;

    while(temp != NULL){
        temp = temp ->next;
        count++;
    }

    int arr[count];
    struct ListNode *temp_1 = head;


    for(int i = 0; i < count; i++){
        int data = temp_1 -> val;
        arr[i] = data;
        temp_1 = temp_1->next;
        
    }

    int max = INT_MIN;

    int sum = 0;


    for(int i = 0; i <= count/2; i++){
        sum = arr[i] + arr[(count-1) - i];

        if(sum > max){
            max = sum;
        }

    }

    return max;
    
}