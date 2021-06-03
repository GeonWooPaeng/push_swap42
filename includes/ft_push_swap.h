/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:23:49 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/03 12:41:41 by gpaeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_stack
{
	struct s_stack *prev;
	int	data;
	struct s_stack *next;
}	t_stack;

//ft_utils.c
int			ft_isspace(char c);
int			ft_error(int ret);
int			ft_check_arr(long long *arr);
long long	ft_atoll(char *str);

//ft_lst.c
void	ft_print_lst(t_stack *stack);
void	ft_free_lst(t_stack *stack);
void	ft_make_arr(t_stack *stack, long long *arr, int cnt);
t_stack	*ft_find_last_lst(t_stack *stack);

//ft_stack.c
t_stack	*ft_stack_init(void);
void	ft_push_first(t_stack *stack, int data);
void	ft_pop(t_stack *head);
void	ft_pop_last(t_stack *head);
int		ft_size(t_stack *head);

//ft_swap.c
void    ft_swap(int *a, int *b);
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);

//ft_push_first.c
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);

//ft_rotate.c
void    ra(t_stack *a);
void    rb(t_stack *b);
void    rr(t_stack *a, t_stack *b);

//ft_rrotate.c
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif