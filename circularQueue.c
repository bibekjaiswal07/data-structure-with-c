#include<stdio.h>
#include<stdlib.h>
#define max 100
char queue[max];
int front=-1,rear=-1;

void enqueue(char n){
    if((rear+1)%max==front){
        printf("Overflow!\n");
        return;
    }
    if(front==-1){
        front=0;
    }
    rear=(rear+1)%max;
    queue[rear]=n;
    printf("%c added to the queue\n",n);
}

void dequeue(void){
    if(front==-1){
        printf("Underflow!\n");
        return;
    }
    printf("%c dequeued from the queue\n",queue[front]);
    if(front==rear){
        front=-1;rear=-1;
    }else{
        front=(front+1)%max;
    }
}

void status(void){
    if(front==-1&&rear==-1){
        printf("Queue is empty\n");
    }else if((rear+1)%max==front){
        printf("Queue is full\n");
    }else{
        printf("Queue is partially filled\n");
    }
}

void display(void){
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements : ");
    int i=front;
    while(i!=rear){
        printf("%c ",queue[i]);
        i=(i+1)%max;
    }
    printf("%c\n",queue[rear]);
}

int main(void){
    
    printf("Name - Bibek Jaiswal\n");
    printf("USN - 1AY23CS058\n");
    
    int choice;
    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Status\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("--------------\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        char x;
        
        switch (choice) {
            case 1:
                printf("Enter the element to be added to the queue : ");
                scanf(" %c",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                status();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
        
    }
    return 0;
}
