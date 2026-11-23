struct ListNode* reverseList(struct ListNode* head) {

    if (head == NULL)
        return NULL;

    int top = -1;
    int x = 0;

    struct ListNode* temp = head;

    while (temp != NULL) {
        x++;
        temp = temp->next;
    }

    int arr[x];

    temp = head;

    while (temp != NULL) {
        arr[++top] = temp->val;
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL) {
        temp->val = arr[top--];
        temp = temp->next;
    }

    return head;
}