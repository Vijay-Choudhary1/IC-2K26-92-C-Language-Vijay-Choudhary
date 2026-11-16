#include <stdio.h>
union Data {
    int i;
    float f;
    char ch;
};
int main() {
    printf("vijay choudhary\n");
    union Data d;
    d.i = 10;
    printf("Integer: %d", d.i);
    return 0;
}
