#include <stdio.h>
int main()
{    
    int maximum, size, i, location = 1;
    scanf("%d", &size);
    int a[size];
   for (i=0;i<size;i++)
        scanf("%d", &a[i]);
        maximum = a[0];
   for (i = 1; i < size; i++)
    {
        if (a[i] < maximum)
        {
                maximum  = a[i];
                location = i+1;
        }
    }
    
    printf("%d", maximum);
}

