// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);

// #include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0'; // s1 = '\0' 으로 쓰면 오류임 s1 포엔터 자체에 NULL 을 대입하려는 것으로 논리적으로 맞지않음
    return (s1);
}

// int main(void)
// {
//     // char    *s2 = "abc"; 문자열 리터럴을 가리키는 포인터이기 때문에 수정시도시 세그폴트, 배열로 저장해야
//     // char    *s1 = "def";

//     char    s2[10] = "abc";
//     char    s1[10] = "deff";

//     printf("%s\n", ft_strcpy(s1, s2));
//     return (0);
// }