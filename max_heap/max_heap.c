/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_heap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:31:19 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/14 15:31:19 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "max_heap.h"

void	heap_insert(t_heap *heap, t_data data, int priority)
{
	int	idx;
	int	parent;

	idx = heap->size + 1;
	parent = get_parent(idx);
	while (idx > 1 && priority > heap->items[parent].priority)
	{
		heap->items[idx] = heap->items[parent];
		idx = parent;
		parent = get_parent(idx);
	}
	heap->items[idx].data = data;
	heap->items[idx].priority = priority;
	++heap->size;
}

t_data	heap_delete(t_heap *heap)
{
	int				child;
	int				parent;
	const t_data	max = heap->items[1].data;
	const t_node	last = heap->items[heap->size];

	parent = 1;
	child = get_high_prioity_child(heap, parent);
	while (child && last.priority < heap->items[child].priority)
	{
		heap->items[parent] = heap->items[child];
		parent = child;
		child = get_high_prioity_child(heap, parent);
	}
	heap->items[parent] = last;
	--heap->size;
	return (max);
}
