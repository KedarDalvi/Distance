#include<stdio.h>
#include <math.h>
#include "point.h"

double distance(Point a, Point b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1 = {0, 0};
    Point p2 = {3, 4};

    double d = distance(p1, p2);
    printf("\nDistance between (%d,%d) and (%d,%d) is %.2f\n\n",
           p1.x, p1.y, p2.x, p2.y, d);

    return 0;
}