/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 15:20:36 by mschumac          #+#    #+#             */
/*   Updated: 2017/05/16 17:22:45 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t src_length;

	src_length = ft_strlen(src);
	if (src_length > len)
		ft_memcpy(dst, src, len);
	else if (src_length < len)
	{
		ft_strcpy(dst, src);
		while (len-- > src_length)
			dst[len] = '\0';
	}
	else
		ft_strcpy(dst, src);
	return (dst);
}
