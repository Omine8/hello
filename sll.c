#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};

struct Node *getNode(int newdata){
struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
temp->next = NULL;
temp->data = newdata;
}

void main(){
struct Node *head,*temp;
head = temp = NULL;
for(int i=5;i>0;i--)
{
temp = getNode(i);
temp->next=head;
head=temp;
}
if(temp!=NULL){
while(temp->next!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
}
