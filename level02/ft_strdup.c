#include <stdlib.h>
// #include <stdio.h>

int ft_strlen(char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_strdup(char *src)
{
    int i = 0;
    char    *dup;
    int len = ft_strlen(src);

    dup = malloc((sizeof(char) * len) + 1);
    if (!dup)
    {
        return (NULL);
    }
    while(src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

// int main(void)
// {
//     char    *src = "abcde!!";
//     char    *dup;
//     dup = ft_strdup(src);
//     printf("%s\n", dup);
//     return (0);
// }
