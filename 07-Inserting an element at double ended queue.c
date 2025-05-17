#include<stdio.h>
#define MAX 100000
long long queue[MAX];
long long rear=-1;
long long front=0;


//logic for inserting from back
void insert_back(long long value){
    if(rear==MAX-1){
        printf("the queue is full\n");
        return;
    }

    
        rear++;
        queue[rear]=value;
    

}


//logic for inserting from front
void insert_front(long long value) {
    
    if (rear == MAX - 1 || rear+1==front) {
        printf("The queue is full\n");
        return;
    }

    
    
    if (rear >= front) {
        for (long long i = rear; i >= front; i--) {
            queue[i + 1] = queue[i];
        }
    }
    // Insert the new value at the front
    queue[front] = value;
    rear++; 
}
int main(){

    long long n;
    scanf("%lld",&n);
    if(n<1 || n>=MAX){
        printf("Invalid input\n");
        return -1;
    } 
    
    
    insert_front(5);
    insert_back(8);

    //logic for printing output
    for(long long i=0;i<=rear;i++){
        printf("%lld",queue[i]);
        if(i<rear){
            printf(" ");
        }
    }
    printf("\n");


    return 0;
}