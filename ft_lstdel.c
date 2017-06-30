/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:34:50 by mschumac          #+#    #+#             */
/*   Updated: 2017/06/30 22:58:37 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp_next;

	if (*alst == NULL || del == NULL)
		return ;
	while ((*alst) != NULL)
	{
		temp_next = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = temp_next;
	}
}
