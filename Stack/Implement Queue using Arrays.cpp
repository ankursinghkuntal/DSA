class MyStack {
  private:
    int arr[1000];
    int top;
  public:
    MyStack(){top=-1;}
    
  public:
    void push(int x) {
        // code here
        top++;
        arr[top] = x;
    }

    int pop() {
        
        if(top == -1){
            return -1;
        }
        
        int res = arr[top];
        top--;
        
        return res;
        // code here
    }
};