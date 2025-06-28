#include<stdio.h>
#include<stdlib.h>
struct circularQueue
{
    int size;
    int f,r,i;
    int *array;
};
void enQueue(struct circularQueue *q,int val)
{
    if((q->r+1)%q->size == q->f)
    {
        printf("Queue is full.so overflow occurs\n");
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->array[q->r] = val;
        printf("Enqued element:%d\n",val);
    }
    printf("array :");
     for(q->i=q->f;q->i !=q->r;q->i=(q->i+1)%q->size )
    {
        printf("%d,",q->array[(q->i+1)]);
    }
    printf("\n");
}
int deQueue(struct circularQueue *q)
{ printf("array :");
     for(q->i=q->f;q->i !=q->r;q->i=(q->i+1)%q->size )
    {
        printf("%d,",q->array[(q->i+1)]);
    }
    printf("\n");
    int a=-1;
    if(q->r==q->f)
    {
        printf("Queue is empty.so underflow occurs\n");
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->array[q->f];

    }

    return a;
}
void display(struct circularQueue *q)
{
    printf("array :");
     for(q->i=q->f;q->i !=q->r;q->i=(q->i+1)%q->size )
    {
        printf("%d,",q->array[(q->i+1)]);
    }
    printf("\n");
}
int main()
{
struct circularQueue q;
q.size=4;
q.f=q.r=0;
q.array=(int*)malloc(q.size*sizeof(int));
enQueue(&q,12);
display(&q);
enQueue(&q,15);
enQueue(&q,22);
enQueue(&q,20);
printf("\n");
printf("Dequeuing element %d\n",deQueue(&q));
printf("Dequeuing element %d\n",deQueue(&q));
printf("Dequeuing element %d\n",deQueue(&q));
printf("Dequeuing element %d\n",deQueue(&q));
enQueue(&q,15);
enQueue(&q,22);
display(&q);

}



