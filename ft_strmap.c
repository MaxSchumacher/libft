/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 23:30:32 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/12 23:40:28 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_string;
	int		s_len;
	int		i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	new_string = ft_strnew(s_len);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_string[i] = f(s[i]);
		i++;
	}
	return (new_string);
}
