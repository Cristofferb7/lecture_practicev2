#include <stdio.h>

struct point {
    int x;
    int y;
};

void changeme(struct point p1) {
    // Logic: p1 is at a DIFFERENT address than the 'p' in main.
    p1.x = 10; 
    p1.y = 20;
    printf("Worker's Copy (at Address 2000): x=%d, y=%d\n", p1.x, p1.y);
    // Function ends, Address 2000 is cleared/deleted.
}

int main() {
    struct point p = {1, 2}; // This 'p' sits at Address 1000.

    changeme(p); // C COPIES the values {1, 2} into Address 2000.

    // TODO: Predict what the computer finds when it looks back at Address 1000.
    // Does Address 1000 know what happened at Address 2000?
    printf("Original (at Address 1000): x=%d, y=%d\n", p.x, p.y); 

    return 0;
}