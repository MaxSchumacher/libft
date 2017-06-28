/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/24 01:05:10 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/28 22:24:01 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_number_of_digits(int number)
{
	int counter;

	counter = 1;
	while (number /= 10)
		counter++;
	return (counter);
}

char		*ft_itoa(int n)
{
	char	*result;
	char	is_negative;
	int		number_of_digits;

	if (n == -2147483648)
		return (ft_strcpy(ft_strnew(11), "-2147483648"));
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	number_of_digits = get_number_of_digits(n);
	result = ft_strnew(is_negative + number_of_digits);
	if (result == NULL)
		return (NULL);
	if (is_negative)
		result[0] = '-';
	while (number_of_digits--)
	{
		result[number_of_digits + is_negative] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
