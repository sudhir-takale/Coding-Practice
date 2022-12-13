#include <stdio.h>
#include <time.h>

int main()
{
    

    time_t t; // not a primitive datatype
    time(&t);

    printf("\nThis program has been written at (date and time): %s", ctime(&t));

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
