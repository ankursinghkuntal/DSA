// 1.

// class Node {
// public:
//     int key, value;
//     Node *prev, *next;
    
//     Node(int k, int v) {
//         key = k;
//         value = v;
//         prev = next = nullptr;
//     }
// };

// class LRUCache {
// private:
//     int capacity;
//     unordered_map<int, Node*> mp;
//     Node *head, *tail;

//     void moveToHead(Node* node) {
//         removeNode(node);
//         addNode(node);
//     }

//     void addNode(Node* node) {
//         node->next = head->next;
//         node->prev = head;
//         head->next->prev = node;
//         head->next = node;
//     }

//     void removeNode(Node* node) {
//         node->prev->next = node->next;
//         node->next->prev = node->prev;
//     }

// public:
//     LRUCache(int cap) {
//         capacity = cap;
//         head = new Node(-1, -1);
//         tail = new Node(-1, -1);
//         head->next = tail;
//         tail->prev = head;
//     }

//     int get(int key) {
//         if (mp.find(key) == mp.end()) {
//             return -1;
//         }

//         Node* node = mp[key];
//         moveToHead(node);
//         return node->value;
//     }

//     void put(int key, int value) {
//         if (mp.find(key) != mp.end()) {
//             Node* existingNode = mp[key];
//             existingNode->value = value;
//             moveToHead(existingNode);
//         } else {
//             if (mp.size() == capacity) {
//                 Node* lru = tail->prev;
//                 removeNode(lru);
//                 mp.erase(lru->key);
//                 delete lru;
//             }

//             Node* newNode = new Node(key, value);
//             mp[key] = newNode;
//             addNode(newNode);
//         }
//     }
// };









// 2.

// class LRUCache {
// private:
//     int capacity;
//     list<pair<int, int>> dll;
//     unordered_map<int, list<pair<int, int>>::iterator> cache;

// public:
//     LRUCache(int cap) {
//         capacity = cap;
//     }

//     int get(int key) {
//         if (cache.find(key) == cache.end()) {
//             return -1;
//         }
//         auto it = cache[key];
//         int value = it->second;
//         dll.erase(it);
//         dll.push_front({key, value});
//         cache[key] = dll.begin();
//         return value;
//     }

//     void put(int key, int value) {
//         if (cache.find(key) != cache.end()) {
//             dll.erase(cache[key]);
//         } else if (dll.size() == capacity) {
//             auto last = dll.back();
//             cache.erase(last.first);
//             dll.pop_back();
//         }
//         dll.push_front({key, value});
//         cache[key] = dll.begin();
//     }
// };