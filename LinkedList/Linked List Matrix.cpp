/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
  
    int n, m;
    
    bool isFeasible(int nr, int nc){
        return nr < n && nc < m && nr >= 0 && nc >= 0;
    }
    
    vector<int>dx = {0, 1};
    vector<int>dy = {1, 0};
    
    void dfs(int row, int col, Node* curr,  vector<vector<int>>& mat){
        
        int nr1 = row+dx[0];
        int nc1 = col+dy[0];
        
        if(isFeasible(nr1, nc1)){
            curr->right = new Node(mat[nr1][nc1]);
            dfs(nr1, nc1, curr->right, mat);
        }
        
        int nr2 = row+dx[1];
        int nc2 = col+dy[1];
        
        if(isFeasible(nr2, nc2)){
            curr->down = new Node(mat[nr2][nc2]);
            dfs(nr2, nc2, curr->down, mat);
        }
        
    }
    
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        n = mat.size();
        m = mat[0].size();
        
        Node*head = new Node(mat[0][0]);
        
        dfs(0, 0, head, mat);
        
        return head;
        
        
        
    }
};