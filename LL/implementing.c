#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
int main(){
    struct Node*A=(struct Node*)malloc(sizeof(struct Node));
    struct Node*B=(struct Node*)malloc(sizeof(struct Node));
    struct Node*C=(struct Node*)malloc(sizeof(struct Node));

    A->data=10;
    B->data=20;
    C->data=30;

    A->next=B;
    B->next=C;
    C->next=NULL;

    struct Node*temp=A;
    while(temp != NULL){
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    printf("this is the end");
    return 0;
}