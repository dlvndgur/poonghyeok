#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int compare(const void *a, const void *b) {
    Point *pointA = (Point *)a;
    Point *pointB = (Point *)b;

    if (pointA->y == pointB->y) {
        return pointA->x - pointB->x; // y좌표가 같으면 x좌표 기준으로 정렬
    }
    return pointA->y - pointB->y; // y좌표 기준으로 정렬
}

int main() {
    int N;
    scanf("%d", &N);

    Point points[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    qsort(points, N, sizeof(Point), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", points[i].x, points[i].y);
    }

    return 0;
}
