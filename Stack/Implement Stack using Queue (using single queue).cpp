/*
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
*/

void QueueStack ::push(int x) {
    // code here
    q1.push(x);
}

int QueueStack ::pop() {
    // code here
    
    if(q1.empty()) return -1;
    
    int res = -1;
    
    while(!q1.empty()){
        res = q1.front();
        q1.pop();
        
        if(!q1.empty()) q2.push(res);
    }
    
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    
    return res;
}