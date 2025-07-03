// Bresenham's Line Algorithm to draw a line.
#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x1, y1, x2, y2, dx, dy, p, x, y;
   

    printf("Enter x1 y1:\n");
    scanf("%d %d", &x1, &y1);

    printf("Enter  x1 y1:\n");
    scanf("%d %d", &x2, &y2);
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    p = 2 * dy - dx;


    
    for (int i = 0; i <= dx; i++)
    {
        putpixel(x, y, WHITE);
        delay(100);
        x++;
        if (p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {
            y++;
            p = p + 2 * (dy - dx);
        }
    }
    
    delay(500);
    closegraph();
    return 0;
}

