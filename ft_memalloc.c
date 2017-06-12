/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 23:32:30 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/11 23:41:52 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int *new_array;

	new_array = (int*)malloc(size);
	if (size == 0 || !new_array)
		return (NULL);
	else
	{
		ft_memset(new_array, 0, size + 1);
		return (new_array);
	}
}
