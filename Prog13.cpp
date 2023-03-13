#include<iostream> 
#include<string>
#include<climits> 
using namespace std;

/* 1->2->3->4->N * /
/* Revision of LL implementation */
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n; 
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n; // creating link from lst node to new node
}

void prtLinkedLst(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"N"<<endl;

}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

bool srch(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }


    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }

    node* todelete = temp->next;  // temp is prev node of the deleting node
    temp->next = temp->next->next; // link bw prev node and node next to deleted node
    delete todelete;
}

node* reverse(node* &head){
    node* preptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;

        currptr->next=preptr;
        preptr=currptr;
        currptr=nextptr;
    }
    return preptr; //preptr is the head of reversed linkedlist
} 

node*   reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    // insertAtTail(head, 5);
    prtLinkedLst(head);


    // insertAtHead(head,5);
    // insertAtHead(head,6);
    // insertAtHead(head,-2);
    // prtLinkedLst(head);

    // if(srch(head,4)){
    //     cout<<"Present"<<endl;
    // } else{
    //     cout<<"Not Present"<<endl;
    // }

    /* Reverse the ll --Iterative approach */
    // node* newHead = reverse(head);
    // prtLinkedLst(newHead);
    
    /* Reverse the ll --Recursive approach */
    // node* newHead = reverseRecursive(head);
    // prtLinkedLst(newHead);

    /*Deletion of Node */
    // deletion(head,3);
    // prtLinkedLst(head);
    // deletion(head,2);
    // prtLinkedLst(head);
    // deleteAtHead(head);
    // prtLinkedLst(head);
    // deletion(head,4);
    // prtLinkedLst(head);

    return 0;
}