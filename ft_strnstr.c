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

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_copy;
	char	*result;
	int		found_string_offset;

	if (len >= ft_strlen(haystack))
		return (ft_strstr(haystack, needle));
	if (!(haystack_copy = ft_strnew(len + 1)))
		return (NULL);
	haystack_copy = ft_strncpy(haystack_copy, haystack, len);
	haystack_copy[len] = '\0';
	if ((result = ft_strstr(haystack_copy, needle)))
	{
		found_string_offset = result - haystack_copy;
		free(haystack_copy);
		return ((char*)haystack + (found_string_offset));
	}
	else
		return (NULL);
}
