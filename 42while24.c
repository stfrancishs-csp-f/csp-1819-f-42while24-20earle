#include <stdio.h>
int main(void)
{

    int k=0;

    while (k<3)
    {
        k=k+4; //use something different in "while" version
    }

    printf ("%d\n",k);

    k=0;

    for (k=0;k<3;k++)
    {
        k=k+4; //use something different in "for" version
        printf ("%d\n", k);
    }

}

