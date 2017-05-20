/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 18:11:05 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/20 18:21:39 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

char *ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char*)(s + ft_strlen(s)));
	while (*s != '\0')
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
