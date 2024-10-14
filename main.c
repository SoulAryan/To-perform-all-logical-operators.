#include <stdio.h>
int main()
{
    int w=25;
    int v=30;
    int g;
    int h;
    int i;

    //Logical AND//
    g=(w>20&&w<30);
    printf("%d\n",g);

    //Logical OR//
    h=(v>25||v<29);
    printf("%d\n",h);

    //Logical NOT//
    i=!(w>20&&w<30);
    printf("%d\n",i);

    return 0;
}
