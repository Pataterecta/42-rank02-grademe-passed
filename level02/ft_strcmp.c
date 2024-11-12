// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int main(void)
// {
//     char    *s1 = "hello";
//     char    *s2 = "";
//     int i;
//     i = ft_strcmp(s1, s2);
//     printf("%d\n", i);
//     return (0);
// }