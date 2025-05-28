#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int f=-1;
int r=-1;

void insert(){
    if(r==size-1){
        printf("\nFull!!!!!");
    }
    else{
        
     if(r==-1){
        r=f=0;
    }
    else{
        printf("\nenter data: ");
        scanf("%d",&queue[r]);
        r++;
    }
    }
}

void delete(){
    if(f==-1){
        printf("\nEmpty!!!!!");
    }
    else{
        printf("\ndeleting...%d",queue[f]);
        if(f==r){
            f=r=-1;
        }
        else{
            f++;
        }
    }
}

int main(){
    int ch;
    printf("\n1....INSERT");
    printf("\n2....DELETE");
    printf("\n3....EXIT");
    while(1){
        printf("\nenter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert(); break;
            case 2: delete(); break;
            default: printf("\nCONGO!!!!!!!!"); exit(0);
        }
    }
    return 0;
}