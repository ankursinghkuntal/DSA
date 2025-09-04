#include<bits/stdc++.h>
using namespace std;

class Trienode{
    bool isEndOfWord;
    Trienode* chindren[26];

    public:

    Trienode(){
        isEndOfWord = false;
        for(int i = 0; i < 26; i++)
            chindren[i] = NULL;
    }
}

class Trie{
    private:
    Trienode* root;

    public:

    Trie(){
        root = new TrieNode();
    }

    void insert(string &str){
        Trienode* node = root;
        for(char ch : str){
            int idx = ch - 'a';
            if(node->children[idx] == NULL){
                node->children[idx] = new Trienode();
            }
            node = node->chindren[idx];
        }
        node->isEndOfWord = true;
    }

    bool search(string &str){
        for(cher ch : str){
            int idx = ch - 'a';
            if(node->children[idx] == NULL) return false;
            node = node->chindren[idx];
        }
        return
    }

    bool prefixCheck(string &pre){
        for(char ch : pre){
            int idx = ch - 'a';
            if(node->children[idx] == NULL)  return false;
            node = node -> children[idx];
        }
    }
}