#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ft_result;
    int printf_result;

    // Test case 1: Basic string output
    ft_result = ft_printf("Hello, ft_printf!\n");
    printf_result = printf("Hello, ft_printf!\n");
    printf("ft_printf returned: %d | printf returned: %d\n\n", ft_result, printf_result);

    // Test case 2: Integer
    ft_result = ft_printf("Number: %d\n", 42);
    printf_result = printf("Number: %d\n", 42);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ft_result, printf_result);

    // Test case 3: Hexadecimal
    ft_result = ft_printf("Hex: %x\n", 255);
    printf_result = printf("Hex: %x\n", 255);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ft_result, printf_result);

    // Test case 4: Pointer address
    int *ptr = &ft_result;
    ft_result = ft_printf("Pointer: %p\n", ptr);
    printf_result = printf("Pointer: %p\n", ptr);
    printf("ft_printf returned: %d | printf returned: %d\n\n", ft_result, printf_result);

    // Test case 5: Character
    ft_result = ft_printf("Char: %c\n", 'A');
    printf_result = printf("Char: %c\n", 'A');
    printf("ft_printf returned: %d | printf returned: %d\n\n", ft_result, printf_result);

    // Test case 6: String
    ft_result = ft_printf("String: %s\n", "42 School");
    printf_result = printf("String: %s\n", "42 School");
    printf("ft_printf returned: %d | printf returned: %d\n\n", ft_result, printf_result);

    // Test case 7: Multiple formats
    ft_result = ft_printf("Mix: %d, %s, %x, %p\n", 42, "test", 255, "");
    printf_result = printf("Mix: %d, %s, %x, %p\n", 42, "test", 255, "");
    printf("ft_printf returned: %d | printf returned: %d\n\n", ft_result, printf_result);

    return 0;
}
