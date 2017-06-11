/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:15:58 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/22 02:30:11 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	if (n > ft_strlen(s2))
		ft_strcat(s1, s2);
	else
		ft_strncpy(s1 + ft_strlen(s1), s2, n);
	return (s1);
}
