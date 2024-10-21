    // struct Compare {
    //     bool operator()(DLLNode* a, DLLNode* b) {
    //         return a->data > b->data;
    //     }
    // };

    // DLLNode* sortAKSortedDLL(DLLNode* head, int k) {
    //     if (!head) return head;

    //     priority_queue<DLLNode*, vector<DLLNode*>, Compare> minHeap;

    //     DLLNode* newHead = nullptr;
    //     DLLNode* last = nullptr;

    //     DLLNode* curr = head;
    //     for (int i = 0; curr && i <= k; ++i) {
    //         minHeap.push(curr);
    //         curr = curr->next;
    //     }

    //     while (!minHeap.empty()) {
    //         DLLNode* smallest = minHeap.top();
    //         minHeap.pop();

    //         if (!newHead) {
    //             newHead = smallest;
    //             last = newHead;
    //         } else {
    //             last->next = smallest;
    //             smallest->prev = last;
    //             last = smallest;
    //         }

    //         if (curr) {
    //             minHeap.push(curr);
    //             curr = curr->next;
    //         }
    //     }

    //     last->next = nullptr;
    //     return newHead;
    // }