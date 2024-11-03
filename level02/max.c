// #include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int biggest;

    biggest = tab[i];
    i++;
    while (i < len)
    {
        if(biggest < tab[i])
        {
            biggest = tab[i];
        }
        i++;
    }
    return (biggest);
}

// int main(void)
// {
//     int tab[20] = {1, 2, 3, 0, 300, 4, 4, 900,6, 10};
//     int i = max(tab, 10);
//     printf("%i\n", i);
//     return (0);
// }
