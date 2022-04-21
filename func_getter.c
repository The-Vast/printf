#include "main.h"

/**
 * func_getter - get the required function based on specifier
 * @x: variable to the function
 * Return: function
 */
int (*func_getter(char x))(va_list args)
{
    int i = 0;
    formatSpec arr[] = {
        {"c", print_c},
        {"s", print_s},
        {"%", print_percent},
        {"d", print_d},
        {"i", print_i},
        {NULL, NULL}
    };

    while (arr[i].spec)
    {
        if (x == arr[i].spec[0])
            return (arr[i].func);
        i++;
    }
    return NULL;
}
