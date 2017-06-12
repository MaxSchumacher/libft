/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 23:44:09 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/12 19:45:33 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_string;

	new_string = (char*)malloc(size + 1);
	if (!new_string)
		return (NULL);
	ft_memset(new_string, '\0', size + 1);
	return (new_string);
}
