#include <stdio.h>

int main() {
    int xm, ym, xr, yr;
    scanf("%d%d%d%d", &xm, &ym, &xr, &yr);
    
    int dx = xm - xr;
    int dy = ym - yr;
    if (dx < 0) {
        dx = -dx;
    }
    if (dy < 0) {
        dy = -dy;
    }
    
    int dist = dx + dy;
    printf("%d\n", dist);
    
    return 0;
}
