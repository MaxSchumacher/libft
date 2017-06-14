/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 23:09:34 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/15 00:42:27 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

char		*ft_strtrim(char const *s)
{
	int			s_len;
	const char	*end_substring;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	end_substring = s + s_len - 1;
	if (!s_len || (!is_whitespace(*s) && !is_whitespace(*end_substring)))
		return (char *)(s);
	while (is_whitespace(*s))
		s++;
	if (s == end_substring + 1)
		return ("");
	while (is_whitespace(*end_substring))
		end_substring--;
	return (ft_strsub(s, 0, end_substring - s + 1));
}
