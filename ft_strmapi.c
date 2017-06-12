/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 23:42:42 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/12 23:51:59 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	s_len;
	char			*new_string;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	new_string = ft_strnew(s_len);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	return (new_string);
}
