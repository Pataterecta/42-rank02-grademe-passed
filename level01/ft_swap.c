// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);

// #include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;
}

// int main(void)
// {
//     int num1 = 42;
//     int num2 = 100;

//     int *p;
//     int *p2; //포인터 먼저 선언하고

//     p = &num1;
//     p2 = &num2; // 선언해둔 인트 값의 주소를 인트 포인터에 배당

//     printf("%d\n", num1);
//     printf("%d\n", num2);

//     ft_swap(p, p2);

//     printf("%d\n", num1);
//     printf("%d\n", num2);
//     return (0);
// }