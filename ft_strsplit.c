/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 20:41:35 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/24 01:01:50 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substring_length(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	s_counter(char const *s, char c)
{
	int substring_counter;

	if (s == NULL)
		return (0);
	substring_counter = 0;
	while (*s != '\0')
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			substring_counter++;
		s++;
	}
	return (substring_counter);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**substrings;
	int		len_current_substring;
	int		i;

	substrings = (char **)malloc(sizeof(char*) * (s_counter(s, c) + 1));
	if (substrings == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		len_current_substring = substring_length(s, c);
		if (len_current_substring)
		{
			substrings[i] = ft_strnew(len_current_substring);
			if (substrings[i] == NULL)
				return (NULL);
			substrings[i] = ft_strsub(s, 0, len_current_substring);
			i++;
			s += len_current_substring;
		}
		else
			s++;
	}
	substrings[i] = NULL;
	return (substrings);
}
