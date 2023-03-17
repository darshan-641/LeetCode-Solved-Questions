class TrieNode{
    public:
    TrieNode* children[26];
    char data;
    bool isTerminal;
    
    TrieNode(char ch){
       this -> data = ch;
        isTerminal = false;
        
        for( int i =0; i<26; i++){
            children[i] = NULL;
        }
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode('\0');
    }
    
    void insertUtil( TrieNode* root, string word){
        
//         Base case
        if( word.length() == 0){
            root -> isTerminal = true;
            return ;
        }
        
//         index & creating child'
        
        int index = word[0] - 'a';
        TrieNode* child;
        
        if( root -> children[index] != NULL){
//             Present
            child = root -> children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }
        
        
//         Recursion call
        insertUtil(child, word.substr(1));
    }
    void insert(string word) {
        insertUtil(root, word);
    }
    
    
    bool searchUtil( TrieNode* root, string word){
        
//         Base case
        if( word.length() == 0){
            return root -> isTerminal;
        }
        
//         index & creating child'
        
        int index = word[0] - 'a';
        TrieNode* child;
        
        if( root -> children[index] != NULL){
//             Present
            child = root -> children[index];
        }
        else{
           return false;
        }
        
        
//         Recursion call
       return searchUtil(child, word.substr(1));
    }
    
    bool search(string word) {
        return searchUtil(root, word);
    }
    
     bool prefixUtil( TrieNode* root, string word){
        
//         Base case
        if( word.length() == 0){
            return true;
        }
        
//         index & creating child'
        
        int index = word[0] - 'a';
        TrieNode* child;
        
        if( root -> children[index] != NULL){
//             Present
            child = root -> children[index];
        }
        else{
           return false;
        }
        
        
//         Recursion call
        return prefixUtil(child, word.substr(1));
    }
    
    bool startsWith(string prefix) {
        return prefixUtil(root, prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */