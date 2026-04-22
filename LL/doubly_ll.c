#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node*createnode(int data){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
struct Node*insertion_f(struct Node*head,int data){
    struct Node*newnode=createnode(data);
    if(head !=NULL){
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
    return head;    
}
struct Node*insertion_e(struct Node*head,int data){
    struct Node*newnode=createnode(data);
if (head==NULL){
    return newnode;
}
    struct Node*temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp-> next = newnode;
    newnode->prev=temp;
    return head;
}

int print_s(struct Node*head){
struct Node*temp=head;
while (temp != NULL){
    printf("%d, ", temp->data);
    temp=temp->next;
}
}

int main(){
    struct Node*head=NULL;
    head=insertion_e(head,10);
    head = insertion_e(head,30);
    head = insertion_e(head,90);
    print_s(head);
    return 0;
}