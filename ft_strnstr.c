/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 00:08:34 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/12 21:46:16 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;
	size_t i;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char*)haystack);
	while (*haystack != '\0' && i <= len - needle_len)
	{
		if (ft_strncmp(needle, haystack, needle_len) == 0)
			return ((char*)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}