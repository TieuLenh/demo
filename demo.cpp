#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node * next;
};
typedef Node * nd;

void enterLi(nd &head){
    head = nullptr;
    nd Add,End;
    int i = 1, n;
    cout<<"n: ";cin>>n;
    while(i<=n){
        Add = new Node();
        cout<<"Node "<<i<<": ";cin>>Add->value;
        if(head == nullptr) head = Add;
        else End->next = Add;
        End = Add;
        i++;
    }
}
void showLi(nd head){
    nd approve = head;
    while(approve != nullptr){
        cout<<approve->value<<" ";
        approve = approve->next;
    }
    cout<<endl;
}
int main()
{
    nd li;
    enterLi(li);
    showLi(li);
    return 0;
}

