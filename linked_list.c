#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}node;
node *head=NULL;
node *temp=NULL;
node *newnod=NULL;
int val,choice;

int display();
    void creatfirst();
    void addnod();
    void insertfirst();
    void deletefirst();
int main(){
    while(choice=display()){
        switch(choice){
            case 1:if(head==NULL){
                        creatfirst();
                    }
                    else{
                        addnod();
                    }
                    break;
            case 2:countnod();
                    break;
            case 3:printlist();
                    break;
            case 4:insertfirst();
                    break;
            case 5:insertatposition();
                    break;
            case 6:deletefirst();
                    break;
            case 7:deletelast();
                    break;
            case 8:deletefrompos();
                    break;
            case 9:deletelist();
                    break;
            case 10:sortlistAscending();
                    break;
            case 11:sortlistDescending();
                    break;
            case 0:printf("exit");
                    break;
            default:printf("not valid");
            break;
            }
        }

    }

int display(){
    int in;
    printf("enter choice:\n");
        if(head==NULL){
            printf("1.create node\n0.exit\n");
            }
        else{
            printf("1.add nod\n2.count nod\n3.printlist\n4.insertfirst\n5.insert at position\n6.delete first\n7.delete last\n8.delete from pos\n9.deletelist\n10.sort list in ascending order\n11.sortlist in descending\n0.exit\n\n");
        }
    scanf("%d",&in);
    return in;
}

void creatfirst(){
    newnod=(node*)malloc(sizeof(node));
    if(newnod==NULL){
        printf("memory not allocated");
        exit(1);
    }
    printf("enter the value:");
    scanf("%d",&val);
    newnod->data=val;
    newnod->prev=NULL;
    newnod->next=NULL;
    head=NULL;
    temp=newnod=NULL;
    printf("node creatd");
}
void addnod(){
    newnod=(node*)malloc(sizeof(node));
    if(newnod==NULL){
        printf("\nmemory not allocated\n");
        exit(1);
    }
    printf("enter the value:");
    scanf("%d",&val);
    newnod->data=val;
    newnod->prev=NULL;
    newnod->next=NULL;
    temp->next=newnod;
    temp=newnod;
    printf("\nnode added\n");
}
void insertfirst(){
    newnod=(node*)malloc(sizeof(node));
    if(newnod==NULL){
        printf("memory not allocated");
        exit(1);
    }
    printf("enter the value:");
    scanf("%d",&val);
    newnod->data=val;
    newnod->prev=NULL;
    newnod->next=head;
    head->prev=newnod;
    head=newnod;
    printf("added node:\n");
}
void deletefirst(){
    node *ptr=head;
    head=head->next;
    head->prev=NULL;
    free(head);
}
