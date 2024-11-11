// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

// reject에 해당하지 않는 애들이 연속되게 s에 몇개나 있나 세어서 리턴함

#include <stddef.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t  i = 0;
    int j;

    while(s[i] != '\0')
    {
        j = 0;
        while(reject[j] != '\0')
        {
            if (s[i] == reject[j])
            {
                return (i); // 브레이크는 와일 하나만 나갑니다.. 찾은 값이 결과값이면 리턴 쓰세요~
            }
            else
                j++;
        }
        i++;
    }
    return (i);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char    *str = "";
//     char    *reject = "cb"; //a 만 세어서 1이 리턴됨
    
//     int k = ft_strcspn(str, reject);

//     printf("%d\n", k);

//     return (0);
// }

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char    *str = "abcdef";
//     char    *reject = "cb"; //a 만 세어서 1이 리턴됨
    
//     int k = strcspn(str, reject);

//     printf("%d\n", k);

//     return (0);
// }