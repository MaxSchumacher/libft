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
	char		*result;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (!(result = ft_strnew(s_len + 1)))
		return (NULL);
	end_substring = s + s_len - 1;
	if (s_len == 0 || (!is_whitespace(*s) && !is_whitespace(*end_substring)))
		return (ft_strcpy(result, s));
	while (is_whitespace(*s))
		s++;
	if (s == end_substring + 1)
		return (result);
	while (is_whitespace(*end_substring))
		end_substring--;
	result = ft_strsub(s, 0, end_substring - s + 1);
	return (result);
}
