#include<stdio.h>
#define CAPACITY 10000
int queue[CAPACITY];
int front=0;
int rare=-1;
int total_item=0;

//logic for inserting an element

int enqueu(int x){
    if(total_item>=CAPACITY){
        printf("the queue is full\n");
        return -1;
    }
    rare=(rare+1)%CAPACITY;
    queue[rare]=x;
    total_item++;
    return 0;
}

//logic for getting the front

int get_front(){
    if(total_item==0){
        printf("the queue is empty\n");
        return -1;
    }

    int value=queue[front];
    return value;
}



int main(){
    int val;
    int n;
    scanf("%d",&n);

    //logic for special case 
    if(n>CAPACITY){
        printf("wrong input\n");
        return -1;
    }

    //logic for getting input
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        if(enqueu(val)==-1){
            printf("the operation has failed\n");
            
        }
    }


    if(get_front()!=-1){
        printf("The front value is %d\n",get_front());
    }











    return 0;
}