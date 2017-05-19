/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:15:58 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/19 20:55:23 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	(n >= ft_strlen(s2)) ? ft_strcat(s1, s2) : strncpy(s1 + strlen(s1), s2, n);
	return (s1);
}
