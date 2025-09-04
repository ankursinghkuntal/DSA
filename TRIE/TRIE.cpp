#include <iostream>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
        for (int i = 0; i < 26; ++i)
            children[i] = nullptr;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the Trie
    void insert(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (node->children[idx] == nullptr)
                node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isEndOfWord = true;
    }

    // Search for a full word
    bool search(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            int idx = ch - 'a';
            if (node->children[idx] == nullptr)
                return false;
            node = node->children[idx];
        }
        return node->isEndOfWord;
    }

    // Check if any word in the Trie starts with the given prefix
    bool startsWith(const string& prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            int idx = ch - 'a';
            if (node->children[idx] == nullptr)
                return false;
            node = node->children[idx];
        }
        return true;
    }
};

int main() {
    Trie trie;

    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");
    trie.insert("ball");

    // Search tests
    cout << boolalpha; // Print true/false instead of 1/0
    cout << "Search 'apple': " << trie.search("apple") << "\n";     // true
    cout << "Search 'app': " << trie.search("app") << "\n";         // true
    cout << "Search 'appl': " << trie.search("appl") << "\n";       // false
    cout << "Search 'bat': " << trie.search("bat") << "\n";         // true
    cout << "Search 'ball': " << trie.search("ball") << "\n";       // true
    cout << "Search 'bald': " << trie.search("bald") << "\n";       // false

    // Prefix tests
    cout << "StartsWith 'app': " << trie.startsWith("app") << "\n"; // true
    cout << "StartsWith 'ba': " << trie.startsWith("ba") << "\n";   // true
    cout << "StartsWith 'cat': " << trie.startsWith("cat") << "\n"; // false

    return 0;
}
