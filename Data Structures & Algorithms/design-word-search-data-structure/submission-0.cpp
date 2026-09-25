class Trie{
    public:
    Trie * trie[26];
    bool isEnd=false;
};
class WordDictionary {
public:
    Trie * tri;
    WordDictionary() {
        tri=new Trie();
    }
    
    void addWord(string word) {
        Trie * temp=tri;
        for(char ch:word)
        {
            if(temp->trie[ch-'a']==nullptr)
            temp->trie[ch-'a']=new Trie();
            temp=temp->trie[ch-'a'];
        }
        temp->isEnd=true;

    }
    bool search_helper(Trie *trie,string word)
    {
        Trie* temp=trie;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(ch=='.')
            {   int j=0;
                for(j=0;j<26;j++)
                {
                    if(temp->trie[j] && search_helper(temp->trie[j],word.substr(i+1)))
                    {
                        return true;
                    }
                }
                if(j==26)
                return false;
            }
            if(ch!='.')
            {
                if(temp->trie[ch-'a']==nullptr)
                return false;
                temp=temp->trie[ch-'a'];
            }
        }
        return temp->isEnd;
    }
    bool search(string word) {
        Trie * temp=tri;
        return search_helper(temp,word);
    }
};