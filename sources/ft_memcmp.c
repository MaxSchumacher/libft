/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 08:20:30 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/16 13:47:49 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *typed_s1;
	unsigned char *typed_s2;

	typed_s1 = (unsigned char*)s1;
	typed_s2 = (unsigned char*)s2;
	if (typed_s1 == typed_s2 || n == 0)
		return (0);
	while (n--)
	{
		if (*typed_s1 != *typed_s2)
			return (*typed_s1 - *typed_s2);
		typed_s1++;
		typed_s2++;
	}
	return (0);
}
