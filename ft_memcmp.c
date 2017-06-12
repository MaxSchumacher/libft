/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 08:20:30 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/12 19:35:51 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *typed_s1;
	const unsigned char *typed_s2;
	size_t				i;
	int					result;

	if (s1 == s2)
		return (0);
	typed_s1 = (const unsigned char*)s1;
	typed_s2 = (const unsigned char*)s2;
	i = 0;
	while (n--)
	{
		result = typed_s1[i] - typed_s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (0);
}
