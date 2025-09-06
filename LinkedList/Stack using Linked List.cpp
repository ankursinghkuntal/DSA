class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode* temp = new StackNode(x);
        temp -> next = top;
        top = temp;
    }

    int pop() {
        
        // code here
        if(top == NULL) return -1;
        int ans = top->data;
        top = top->next;
        
        return ans;
    }

    MyStack() { top = NULL; }
};