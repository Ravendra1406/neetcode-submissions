class Trie {
    public:
    Trie *links[26]={nullptr};
    bool flag=false;
    };
class PrefixTree {
public:
    Trie *trie;
    PrefixTree() {
        trie=new Trie();
    }
    
    void insert(string word) {
        Trie *temp=trie;
        for(char ch:word)
        {
            if(temp->links[ch-'a']==nullptr)
            {
                temp->links[ch-'a']=new Trie();
            }
            temp=temp->links[ch-'a'];
            


        }
        temp->flag=true;
    }
    
    bool search(string word) {
        Trie *temp=trie;
        for( char ch:word)
        {
            if(temp->links[ch-'a']==nullptr)
            return false;
            temp=temp->links[ch-'a'];
        }
        return temp->flag;
    }
    
    bool startsWith(string prefix) {
        Trie *temp=trie;
        for(char ch:prefix)
        {
            if(temp->links[ch-'a']==nullptr)
            return false;
             temp=temp->links[ch-'a'];
        }
        return true;
    }
};
