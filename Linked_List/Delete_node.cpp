#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void delete_node(Node *head,int pos){
    Node *tmp=head;
    for (int i = 1; i < pos; i++)
    {
        tmp=tmp->next;
        if(tmp==NULL){cout<<"ERROR!!!"<<endl;return;}
    }
    if(tmp->next==NULL){cout<<"ERROR!!!"<<endl;return;}
    
    Node *deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}