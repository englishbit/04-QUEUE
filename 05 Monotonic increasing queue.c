#include<stdio.h>
#define MAX 10000

long long rear=-1;
long long queue[MAX];
//logic for inserting
    void insert(long long value){
    if(rear==MAX-1){
        printf("the queue is full\n");
        return;
    }
    long long indx=rear;
    while(indx>=0 && queue[indx]>value){
        queue[indx+1]=queue[indx];
        indx--;

    }
    queue[indx+1]=value;
    rear++;

}

int main(){

    long long n;
    scanf("%lld",&n);

    //logic for special case
    if(n<0 || n>=MAX){
        printf("Invalid input\n");
        return -1;
    }

    
    //logic for passing value
    while(n--){
        long long x;
        scanf("%lld",&x);
        insert(x);
    }

    //logic for printing output
    for(long long i=0;i<=rear;i++){
        printf("%lld ",queue[i]);

    }
    printf("\n");

    return 0;
}