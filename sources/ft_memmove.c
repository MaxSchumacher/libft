/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:32:21 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/15 22:30:16 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*typed_dst;
	const unsigned char *typed_src;

	typed_dst = dst;
	typed_src = src;
	if (typed_dst == typed_src)
		return (typed_dst);
	else if (typed_src < typed_dst)
	{
		while (len--)
			typed_dst[len] = typed_src[len];
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
