class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int cnt = 0;
        Node *temp = head;
        while(temp){
            if(temp->data == key) cnt++;
            temp = temp -> next;
        }
        return cnt;
    }
};