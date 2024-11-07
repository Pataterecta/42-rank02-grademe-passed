// Assignment name  : rotone
// Expected files   : rotone.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the next one in alphabetical order.

// 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

// The output will be followed by a \n.

// If the number of arguments is not 1, the program displays \n.

// Example:

// $>./rotone "abc"
// bcd
// $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
// BlkiA aMLJKa , 23z $
// $>./rotone | cat -e
// $
// $>
// $>./rotone "" | cat -e
// $
// $>

#include <unistd.h>

int main(int ac, char **argv)
{
    int i = 0;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i] != '\0') // 인자내의 캐릭터 와일 돌릴라면 스트링으로 넣지 말자
    {
        if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
        {
            argv[1][i] = argv[1][i] + 1;
        }
        else if (argv[1][i] == 'z') //else 를 넣지 않으면 모든 이프문을 확인하게 되기 때문에 이미 바뀐값을 또 변환합니다
        {
            argv[1][i] = 'a';
        }
        else if (argv[1][i] == 'Z')
        {
            argv[1][i] = 'A';
        }
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}