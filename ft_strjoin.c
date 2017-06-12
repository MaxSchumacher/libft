/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 00:45:08 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/13 00:50:09 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_string;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_string = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_string == NULL)
		return (NULL);
	ft_strcpy(new_string, s1);
	ft_strcat(new_string, s2);
	return (new_string);
}
