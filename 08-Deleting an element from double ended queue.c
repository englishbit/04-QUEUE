#include<stdio.h>
#define MAX 10000
int queue[MAX];

    //logic for deleting from the front
    int rear=-1;
    int front=0;
    void deleting_front(){
        if(front>rear){
            printf("the queue is empty\n");
            return;
        }
        int x=queue[front];
        printf("The deleted element is %d\n",x);
        
        front++;
    }

    //logic for deleting from the back
    void deleting_back(){
        if(front>rear){
            printf("the queue is empty\n");
            return;
        }
        int x=queue[rear];
        printf("The deleted element is from the back %d\n",x);
        rear--;
    }

int main(){
  
deleting_back();
deleting_front();

    return 0;
}