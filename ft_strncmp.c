/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 18:42:15 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/21 00:08:16 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					i;
	const unsigned char *signed_s1;
	const unsigned char *signed_s2;

	signed_s1 = (const unsigned char*)s1;
	signed_s2 = (const unsigned char*)s2;
	i = 0;
	if (signed_s1[0] == '\0' || signed_s2[0] == '\0')
		return (signed_s1[i] - signed_s2[i]);
	while (n--)
	{
		if (signed_s1[i] != signed_s2[i] || signed_s1[i] == '\0')
			return (signed_s1[i] - signed_s2[i]);
		i++;
	}
	return (0);
}
