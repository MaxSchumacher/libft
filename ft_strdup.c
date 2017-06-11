/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 14:07:26 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/16 14:39:32 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new_string;

	new_string = (char*)malloc(ft_strlen(s1) + 1);
	if (!new_string)
		return (NULL);
	return (ft_strcpy(new_string, s1));
}
