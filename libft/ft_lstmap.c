/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:46:55 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/12 14:30:55 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *new_node;
	t_list *current;
	t_list *next;

	new_lst = malloc(sizeof(t_list));
	current = lst;
	while (current != NULL)
	{
		next = current->next;
		new_node = malloc(sizeof(t_list));
		new_node->content = f(current->content);
		ft_lstadd_back(&new_lst, new_node);
		del(current->content);
		current = next;
	}
	return (new_lst);
}
