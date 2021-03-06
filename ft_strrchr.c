/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 18:24:21 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/20 18:30:37 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int s_len;

	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char*)(s + s_len));
	s += s_len;
	while (s_len-- > -1)
	{
		if (*s == c)
			return ((char*)s);
		s--;
	}
	return (NULL);
}
