#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push(){
    if(top==size-1){
        printf("\nSTACK OVERFLOW!!!!!!!");
    }
    else{
        top++;
        printf("\nenter data: ");
        scanf("%d",&stack[top]);
    }
}

void pop(){
    if(top==-1){
        printf("\nSTACK UNDERFLOW!!!!!!!");
    }
    else{
        printf("\nDeleting.......%d",stack[top]);
        top--;
    }
}

int main(){
    int ch;
    printf("\n1....PUSH");
    printf("\n2....POP");
    printf("\n3....EXIT");
    while(1){
        printf("\nenter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            default: printf("\nCONGO!!!!!!!!"); exit(0);
        }
    }
    return 0;
}