struct Node{
    int val;
    int key;
    int freq;
    Node* next;
    Node* prev;
    Node(int key, int val){
        this->key = key;
        this->val = val;
        freq = 1;
        next = NULL;
        prev = NULL;
    }
};

struct DLList{
    Node* head;
    Node* tail;
    int size;
    DLList(){
        head =  new Node(-1, -1);
        tail =  new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }
    
    void addTofront(Node* node){
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
        node->prev = head;
        size++;
    }
    
    void removeNode(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
        size--;
    }
    
    Node* removeFromlast() {
        if(size > 0) {
            Node* node = tail->prev;
            removeNode(node);
            return node;
        }
        return NULL;
    }
    
};

class LFUCache {
    
    int cap, minFreq;
    unordered_map<int,Node*>keyNode;
    unordered_map<int,DLList*>freqNode;
    
  public:
    LFUCache(int cap) {
        this->cap = cap;
        minFreq = 0;
    }

    int get(int key) {
        
        if(keyNode.find(key) != keyNode.end()){
            update(keyNode[key]);
            return keyNode[key]->val;
        } 
        return -1;
        
    }

        
    void put(int key, int value) {
        
        if(cap == 0) return;
        
        if(keyNode.find(key) != keyNode.end()){
            keyNode[key]->val = value;
            update(keyNode[key]);
        }else{
            if(cap <= keyNode.size()){
                DLList* list = freqNode[minFreq];
                Node* node = list->removeFromlast();
                keyNode.erase(node->key);
                delete(node);
            }
            
            Node* newNode = new Node(key, value);
            keyNode[key] = newNode;
            minFreq = 1;
            if(freqNode.find(1) == freqNode.end()){
                freqNode[1] = new DLList();
            }
            freqNode[1]->addTofront(newNode);
        }
        
    }
    
    int getMinFreq() {
        return minFreq;
    }
    
    void update(Node* node){
        int freq = node->freq;
        DLList *list = freqNode[freq];
        list->removeNode(node);
        
        node->freq++;
        
        if(freq == minFreq && list->size == 0){
            minFreq++;
        }
        
        
        if(freqNode.find(node->freq) == freqNode.end()){
            freqNode[node->freq] = new DLList();
        }
        
        freqNode[node->freq]->addTofront(node);
    }
};