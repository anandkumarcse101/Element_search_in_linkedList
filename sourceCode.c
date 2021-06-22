#include<stdio.h>
#include<stdlib.h>
struct Node
{

    int data;
    struct Node *next;
}*head=NULL;

void create(int A[],int size)
{
int i;
 struct Node *temp,*last;
 head=(struct Node*)malloc(sizeof(struct Node));
 head->data=A[0];
 head->next=NULL;
 last=head;
 for(i=1;i<size;i++)
 {
     temp=(struct Node*)malloc(sizeof(struct Node));
      temp->data=A[i];
      temp->next=NULL;
      last->next=temp;
      last=temp;
 }


}

struct Node * LSearch(struct Node *p,int key)
{
   while(p!=NULL)
   {
      if (key==p->data)
         return(p);
     p=p->next;
   }
   return NULL;
}
int main()
{   struct Node *temp;
  int A[]={1,2,3,4,5,6,7,8,9,0};
  int size=sizeof(A)/sizeof(A[0]);
   create(A,size);
   int key =9;
  temp=LSearch(head,key);
  if (temp->data==key){
  printf("The value is =%d",temp->data);
  }else
  {
      printf("Key value is not found");
  }
    return 0;
}
