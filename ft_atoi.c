/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 02:34:30 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/12 19:48:59 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_whitespace(char c)
{
	return (c == '\n' || c == '\v' || c == '\t' || c == '\f' || c == '\r');
}

int			ft_atoi(const char *s)
{
	int			sign;
	long long	result;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	while (*s == '0' || ft_is_whitespace(*s) || *s == ' ')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '+' || *s == '-')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (int)(*s - '0');
		s++;
		i++;
	}
	if (i > 19 || result > 9223372036854775807)
		return ((sign == -1) ? -1 : 0);
	else
		return (sign * (int)result);
}
