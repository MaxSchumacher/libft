/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 00:07:38 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/13 00:32:36 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_string;

	if (s == NULL)
		return (NULL);
	if (start + len > ft_strlen(s))
		return (NULL);
	new_string = ft_strnew(len);
	if (new_string == NULL)
		return (NULL);
	ft_strncpy(new_string, s + start, len);
	return (new_string);
}
