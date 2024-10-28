#include <stdio.h>
#include <stdlib.h>

int instructions() {
    /* Fila  (FIFO - Firs t In, First Out)*/
    // Pode ser implementado com array ou lista encadeada
    /*
    -- OPERADORES --
    Enqueue: Adicionar um elemento a fila
    Dequeue: Remover um elemento da frente da fila
    Peek: Verificar qual elementa está na frente da fila sem remover
    isEmpty: Verificar se a fila está vazia
    isFull: Verificar se a fila está cheia
    */


    return 0;
}

#define MAX 5

typedef struct Queue {
    int items[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q){
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue *q){
    return q->rear = MAX - 1;
}

int isEmpty(Queue  *q){
    return q->front == -1 || q->front > q->rear;
}

void enqueue(Queue *q, int value){
    if(isFull(q)){
        printf("Queue is full!\n");
        return;
    }
    if(q->front == -1) q->front = 0;
    q->items[++(q->rear)] = value;
}

int dequeue(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty!\n");
        return -1;
    }
    return q->items[(q->front)++];
}

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    printf("Dequeue: %d\n", dequeue(&q));
    enqueue(&q, 30);

    return 0;
}
