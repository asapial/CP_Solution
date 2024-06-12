#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 200

typedef struct {
    int data[MAX_NODES];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) {
    q->front = 0;
    q->rear = 0;
}

void enqueue(Queue *q, int value) {
    q->data[q->rear++] = value;
}

int dequeue(Queue *q) {
    return q->data[q->front++];
}

int isEmpty(Queue *q) {
    return q->front == q->rear;
}

int main() {
    int V, E, u, v;
    int AdjList[MAX_NODES][MAX_NODES];
    Queue q;

    while (scanf("%d", &V), V) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                AdjList[i][j] = 0;
            }
        }

        scanf("%d", &E);

        for (int i = 0; i < E; i++) {
            scanf("%d %d", &u, &v);
            AdjList[u][v] = 1;
            AdjList[v][u] = 1;
        }

        initQueue(&q);
        enqueue(&q, 0);
        int color[MAX_NODES];
        for (int i = 0; i < V; i++) {
            color[i] = 1e9;
        }
        color[0] = 0;
        int isBipartite = 1;
        while (!isEmpty(&q) && isBipartite) {
            int u = dequeue(&q);
            for (int j = 0; j < V; j++) {
                if (AdjList[u][j]) {
                    int v = j;
                    if (color[v] == 1e9) {
                        color[v] = 1 - color[u];
                        enqueue(&q, v);
                    } else if (color[v] == color[u]) {
                        isBipartite = 0;
                        break;
                    }
                }
            }
        }

        if (isBipartite)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }

    return 0;
}
