#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct stack{
    int data;
    struct stack *next;
}s;

s *makenode(){
    s *p=(s*)malloc(sizeof(s));
    p->next=0;
    printf("\nenter data:");
    scanf("%d",&p->data);
    return p;
}

s *addfirst(s *h){
    s *p=makenode();
    p->next=h;
    return p;
}

s *dellast(s *h){
    s *p,*t;
    if(h==0){
        printf("\nempty!!!!");
        return 0;
    }
    if(h->next==0){
        printf("\ndeleting....%d",h->data);
        free(h);
        return 0;
    }
    t=h;
    while(t->next->next!=0){
        t=t->next;
    }
    p=t->next;
    printf("\ndeleting....%d",p->data);
    t->next=0;
    free(p);
    return h;
}

int main(){
    int ch;
    s *head=0;
    printf("\n\n1...INSERT");
    printf("\n2...DELETE");
    printf("\n3...EXIT");
    while(1){
        printf("\nenter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: head=addfirst(head);
             break;
            case 2: head=dellast(head);
             break;
            default: printf("CONGOOO!!!!!");
             exit(0);
        }
    }
    return 0;
}