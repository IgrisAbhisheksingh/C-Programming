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

s *delfirst(s *h){
    s *p;
    if(h==0){
        printf("\nnot possible");
        return 0;
    }
    p=h;
    h=h->next;
    printf("\ndeleting...%d",p->data);
    free(p);
    return h;
}

int main(){
    int ch;
    s *head=0;
    printf("\n\n1...PUSH");
    printf("\n2...POP");
    printf("\n3...EXIT");
    while(1){
        printf("\nenter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: head=addfirst(head);
             break;
            case 2: head=delfirst(head);
             break;
            default: printf("CONGOOO!!!!!");
             exit(0);
        }
    }
    return 0;
}