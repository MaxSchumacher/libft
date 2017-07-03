/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 01:36:43 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/28 23:25:27 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	integer_power(int base, int exponent)
{
	int i;
	int result;

	if (exponent == 0)
		return (1);
	if (exponent < 0 || base < 0)
		return (0);
	if (exponent == 1)
		return (base);
	i = 1;
	result = base;
	while (i < exponent)
	{
		result *= base;
		i++;
	}
	return (result);
}

static int	get_number_of_digits(int number)
{
	int counter;

	counter = 1;
	while (number /= 10)
		counter++;
	return (counter);
}

static int	handle_max_and_min_int(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (1);
	}
	if (n == 2147483647)
	{
		ft_putstr_fd("2147483647", fd);
		return (1);
	}
	return (0);
}

void		ft_putnbr_fd(int n, int fd)
{
	int i;
	int number_length;
	int decimal_place;
	int current_digit;

	if (handle_max_and_min_int(n, fd))
		return ;
	i = 1;
	number_length = get_number_of_digits(n);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (i <= number_length)
	{
		decimal_place = integer_power(10, number_length - i);
		current_digit = n / decimal_place;
		n = n - current_digit * decimal_place;
		ft_putchar_fd(current_digit + '0', fd);
		i++;
	}
}
