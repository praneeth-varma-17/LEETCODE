/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */




void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
}

void mergesort(int arr[], int low, int high){
    if(low < high){
        int mid = low + (high - low) / 2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
} 
struct ListNode* sortList(struct ListNode* head) {

    if(head == NULL){
        return NULL;
    }

    int count = 0;

    struct ListNode *temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    int arr[count];

    int x = 0;
    temp = head;

    while(x < count){
        arr[x] = temp->val;
        x++;
        temp = temp->next;

    }
    
    mergesort(arr,0,x-1);
    temp = head;
    x = 0;
    while(x < count){
        temp->val = arr[x];
        temp = temp->next;
        x++;

    }
    return head;
}