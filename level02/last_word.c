// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its last word followed by a \n.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or there are no words, display a newline.

// Example:

// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

#include <unistd.h>
// #include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **argv)
{
    int len;
    if (ac == 2 && argv[1] != NULL)
    {
        len = ft_strlen(argv[1]) - 1;
        while((argv[1][len] == ' ' || (argv[1][len] >= 9 && argv[1][len] <= 13)) && len >= 0)
        {
            len--; // 기억하기
        }
        while(argv[1][len] != ' ' && !(argv[1][len] >= 9 && argv[1][len] <= 13) && len >= 0)
        {//"000fgsdfs0000"
            len--;
        }
        len++; // 기억하기
        while(argv[1][len] != ' ' && !(argv[1][len] >= 9 && argv[1][len] <= 13) && argv[1][len] != '\0')
        {
            write(1, &argv[1][len], 1);
            len++;
        }
    }
    write(1,"\n",1);
    return 0;
}

        // if (argv[1][len] == ' ' || (argv[1][len] >= 9 && argv[1][len] <= 13))
        // {
        //     while(argv[1][len] == ' ' || (argv[1][len] >= 9 && argv[1][len] <= 13 && len >= 0))
        //     {
        //         len--;
        //     }
        // }
        // while(len >= 0 && !(argv[1][len] == ' ' || (argv[1][len] >= 9 && argv[1][len] <= 1)))
        // {
        //     len--;
        // }
        // if (len >= 0 && (argv[1][len] != ' ' || !(argv[1][len] >= 9 && argv[1][len] <= 13)))
        // {
        //     while(argv[1][len] != ' ' || !(argv[1][len] >= 9 && argv[1][len] <= 13 && argv[1][len] != '\0'))
        //     {
        //             write(1, &argv[1][len], 1);
        //             len++;
        //     }
        // }