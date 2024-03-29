/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:27:59 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/19 09:40:48 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/includes/libft.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

// Check Arguments
int		is_ordened(t_stack *stack);
int		is_rev_ordened(t_stack *stack);
int		is_duplicated(t_stack *stack_a);
int		check_input(int argc, char **argv);

// Error Handler
void	free_stack(t_stack **stack);
void	ft_free(char **str);
void	exit_error(t_stack **stack, char *msg, int fd);

// Handler Arguments
void	populate(int argc, char **argv);
void	push_swap(t_stack **stack_a, t_stack **stack_b);

// Stack
t_stack	*init_stack(int argc, char **argv);
t_stack	*new_element(int nb);
t_stack	*get_last(t_stack *last);
int		get_stack_size(t_stack *stack);
void	get_index(t_stack *stack, int stack_size);
void	add_back(t_stack **stack, t_stack *new_element);

// Algoritm
void	sort_three(t_stack **stack);
void	sort_four(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	radix(t_stack **stack_a, t_stack **stack_b);

// Commands
void	push(t_stack **src, t_stack **dest);
void	pa(t_stack **stack_b, t_stack **stack_a);
void	pb(t_stack **stack_a, t_stack **stack_b);

void	swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

void	rev_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif
