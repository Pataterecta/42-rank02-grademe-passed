// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the string in reverse
// followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(int ac, char **argv)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int len = ft_strlen(argv[1]); // 파라매터 없는 경우 세그폴트 뜨지 않도록 ac != 2 를 먼저 체크한 후 데클해야함

    while(len > 0)
    {
        write(1, &argv[1][len - 1], 1);
        len--;
    }
    write(1, "\n", 1);
    return (0);
}