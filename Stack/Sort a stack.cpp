/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack ::sort() {
    // Your code here
    stack<int>st = s;
    
    while(!s.empty()) s.pop();
    
    while(!st.empty()){
        
        int temp = st.top();
        st.pop();
        
        if(s.empty()  || (s.top() < temp)) s.push(temp);
        
        else{
            
            while(!s.empty() && (s.top() > temp)){
                st.push(s.top());
                s.pop();
            } 
        
            s.push(temp);    
            
        }

    }
    
}