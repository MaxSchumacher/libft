/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 19:25:36 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/20 23:45:30 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int					i;
	const unsigned char *signed_s1;
	const unsigned char *signed_s2;

	signed_s1 = (const unsigned char*)s1;
	signed_s2 = (const unsigned char*)s2;
	i = 0;
	while (signed_s1[i] != '\0')
	{
		if (signed_s2[i] == '\0')
			return (1);
		if (s1[i] != s2[i])
			return (signed_s1[i] - signed_s2[i]);
		i++;
	}
	return (signed_s1[i] - signed_s2[i]);
}
