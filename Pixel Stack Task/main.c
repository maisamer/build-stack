#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedList.h"


int main(int argc, char** argv)
{
    //printf("i am here\n");
    //int y=200;
    push(200);
    push(300);
    push(1000);
    push(900);
    //printf("i am here\n");
    printf("%d\n",top());
    pop();
    printf("%d\n",top());
    pop();
    printf("%d\n",top());
    pop();
    printf("%d\n",top());
    pop();
    printf("%d\n",top());
    pop();
    printf("%d\n",top());

    return 0;
}

struct node{
    int data;
    struct node *next;
};
static struct node *head=NULL;

void pop(){
    //printf("i am here\n");
    if(is_empty()){
        printf("the stack is empty\n");

    }else{
    struct node *s=head;
    head=head->next;
    free(s);}


}
int top()
{
    if(is_empty()){
        printf("no item in the stack\n");
        //return NULL;
    }

    return head->data;
}
void push(int x){
    //printf("%d",x);
    struct node *s=malloc(sizeof(struct node));
    s->data=x;
    //printf("i am here\n");
    if(head==NULL){
        s->next=NULL;
    }else{
        s->next=head;
    }
    head=s;

}
bool is_empty(){
    return head==NULL;
}
