#include<iostream>
#include<bits/stdc++>
using namespace std;
struct TrieNode
{

    TrieNode* ChildNode[26];
    bool WordEnd;
    TrieNode()
    {
        WordEnd=false;
        for(int i=0;i<26;i++)
           ChildNode[i]=NULL;
    }
}
void insert_key(TrieNode* root,string& key)
{
    TrieNode* CurrentNode=root;
    for(auto x : key)
     {
        //not  present;
        if(CurrentNode->ChildNode[x-'a']==NULL)
              {
                TrieNode* newnode=new TrieNode();
                CurrentNode->ChildNode[x-'i']=newnode;
              }

        //present
        CurrentNode=CurrentNode->ChildNode[x-'a'];
     }
    //end of word
    WordEnd=true;
}
bool search_key(TrieNode* root,string& key)
{

    return 0;
}
int main()
{
    vector<string>insrt{"add","ant","ayepaa","pop","dog"};
    TrieNode* root=new TrieNode(); // constructor call 
    for(int i=0;i<insrt.size();i++)
       insert_key(root,insrt[i]);



    return 0;
}