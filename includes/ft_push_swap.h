/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaeng <gpaeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:23:49 by gpaeng            #+#    #+#             */
/*   Updated: 2021/06/02 15:08:52 by gpaeng           ###   ########.fr       */
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

//ft_stack.c
t_stack	*ft_stack_init();
void	ft_push(t_stack *stack, int data);
int		ft_pop(t_stack *head);
int		ft_size(t_stack *head);

//ft_swap.c
void    ft_swap(int *a, int *b);
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);

//ft_push.c
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);

//ft_rotate.c
void    ra(t_stack *a);
void    rb(t_stack *b);
void    rr(t_stack *a, t_stack *b);

//ft_lst.c
void	ft_print_lst(t_stack *stack);
void	ft_free_lst(t_stack *stack);
void	ft_make_arr(t_stack *stack, long long *arr, int cnt);

#endif