    
// Given a singly linked list's head. Your task is to complete the function alternatingSplitList() that splits the given linked list 
// into two smaller lists. The sublists should be made from alternating elements from the original list.
// Note: 

// The sublist should be in the order with respect to the original list.
// Your have to return an array containing the both sub-linked lists.
    

    
    // vector<Node*> alternatingSplitList(struct Node* head) {
    //     // Your code here
        
        
    //     vector<Node*>AlternateSplit;
    //     if(head->next == NULL){
    //         return {head,NULL};
    //     }
        
    //     Node*t1 = head;
    //     Node*t2 = head -> next;
    //     AlternateSplit.push_back(t1);
    //     AlternateSplit.push_back(t2);
        
    //     Node* curr = head->next->next;
    //     int cnt = 0;
        
    //     while(curr != NULL){
    //         if(cnt%2 == 0){
    //             t1->next = curr;
    //             t1 = curr;
    //         }else{
    //             t2->next = curr;
    //             t2 = curr;
    //         }
    //         curr = curr->next;
    //         cnt++;
    //     }
        
    //     t1->next = NULL;
    //     t2->next = NULL;
        
    //     return AlternateSplit;
        
    // }