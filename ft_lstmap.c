/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschumac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 23:25:15 by mschumac          #+#    #+#             */
/*   Updated: 2017/07/01 01:09:03 by mschumac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list *new_node;
	t_list *head;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!((new_node = f(lst))))
		return (NULL);
	head = new_node;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(new_node->next = f(lst)))
			return (NULL);
		new_node = new_node->next;
	}
	return (head);
}
