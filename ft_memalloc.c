#include "libft.h"

void    *ft_memalloc(size_t size)
{
    int* new_array;

    new_array = (int*)malloc(size);
    if (!new_array)
        return (NULL);
    else 
    {
        ft_memset(new_array, 0, size); 
        return (new_array);
    }
}
