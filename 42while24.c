#include <stdio.h>
int main(void)
{

    int sum=0;
    int k=0;

    //for (k=5)
    while (k<5)
    {
        printf ("%d\n", k);
        sum = sum + k; //use something different in "while" version
        k++;
     }

    printf ("Sum - %2d\n",sum);

    //k=5;

    //while (k=0;k<5;k++)
    for (k=10;k>0;k--)
    {
        //k=k-1; //use something different in "for" version
        printf ("%2d\n", k);
    }

    //print Blasoff!
    printf ("Blastoff!\n");

}

