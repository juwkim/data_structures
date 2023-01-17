/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:50:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/01/17 15:02:31 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	dq_push_front(t_deque *dq, t_dq_node node)
{
	dq->head = (dq->head - 1) % QUEUE_SIZE;
	dq->nodes[dq->head].item = node.item;
}

void	dq_push_back(t_deque *dq, t_dq_node node)
{
	dq->nodes[dq->tail].item = node.item;
	dq->tail = (dq->tail + 1) % QUEUE_SIZE;
}
