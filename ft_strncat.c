/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:15:58 by mschumac          #+#    #+#             */
/*   Updated: 2017/07/01 01:36:27 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	if (n >= ft_strlen(s2))
		return (ft_strcat(s1, s2));
	ft_strncpy(s1 + len_s1, s2, n);
	s1[len_s1 + n] = '\0';
	return (s1);
}
