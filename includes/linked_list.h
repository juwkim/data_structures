/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:16:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/07 00:16:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <stdlib.h>
# include <stdbool.h>

# include "libft_headers/ft_printf.h"

typedef int	t_data;

typedef struct s_node
{
	t_data			item;
	struct s_node	*next;
}	t_node;

typedef struct s_linked_list
{
	size_t	size;
	t_node	*head;
}	t_linked_list;


// usils.c
void			init(t_linked_list *list);
void			destroy(t_linked_list *list);
bool			is_empty(t_linked_list *list);
size_t			size(t_linked_list *list);

// push.c
void			push_front(t_linked_list *list, t_data item);
void			push_back(t_linked_list *list, t_data item);
void			insert(t_linked_list *list, int pos, t_data item);

// pop.c
void			pop_front(t_linked_list *list);
void			pop_back(t_linked_list *list);
void			erase(t_linked_list *list, int pos);

// getter.c
t_data			front(t_linked_list *list);
t_data			back(t_linked_list *list);
t_data			get_item(t_linked_list *list, int pos);

// operation.c
void			print(t_linked_list *list);
void			reverse(t_linked_list *list);
t_linked_list	*concatenate(t_linked_list *list1, t_linked_list *list2);

#endif // LINKED_LIST_H
