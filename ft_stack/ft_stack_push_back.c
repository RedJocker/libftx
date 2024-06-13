/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:25:07 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/12 23:01:41 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"

t_stack	ft_stack_push_back(t_stack stack, void *element){
    return (ft_arraylist_addat(stack, element, 0));
}

/* #include "ft_util.h" */
/* #include "ft_stdio.h" */
/* #include <stdio.h> */
/* #include <assert.h> */
/* void print_int(void *i) */
/* { */
/* 	int *ii; */

/* 	ii = i; */
/* 	ft_putnbr_fd(*ii, 1); */
/* } */

/* int main(void) */
/* { */
/* 	t_stack s; */
/* 	int		arr[10]; */
/* 	int		len; */
/* 	int		*ele; */

/* 	(void) len; */
/* 	s = ft_stack_new((void (*) (void *))ft_nop); */
/*     printf("hello"); */
/* 	arr[0] = 10; */
/* 	ft_stack_push(s, arr + 0);  // [10] */
/* 	ft_stack_print(s, print_int); */
/* 	assert(ft_stack_len(s) == 1); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 10); */
/* 	arr[1] = 100; */
/* 	ft_stack_push_back(s, arr + 1); // [10 100] */
/* 	ft_stack_print(s, print_int); */
/* 	assert(ft_stack_len(s) == 2); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 10); */
/* 	ele = ft_stack_pop(s);   // [100] */
/* 	ft_stack_print(s, print_int); */
/* 	assert(ft_stack_len(s) == 1); */
/* 	assert(*ele == 10); */
/* 	arr[2] = 111; */
/* 	ft_stack_push_back(s, arr + 2);  // [100 111] */
/* 	ft_stack_print(s, print_int); */
/* 	assert(ft_stack_len(s) == 2); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 100); */
/* 	ele = ft_stack_pop_back(s);   // [100] */
/* 	ft_stack_print(s, print_int); */
/* 	assert(ft_stack_len(s) == 1); */
/* 	assert(*ele == 111); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(*ele == 100); */
/* 	ele = ft_stack_pop(s); // [] */
/* 	assert(ft_stack_len(s) == 0); */
/* 	assert(*ele == 100); */
/* 	ft_arraylist_destroy(s); */
/* 	ele = ft_stack_peek(s); */
/* 	assert(ele == NULL); */
/* 	ele = ft_stack_pop(s); */
/* 	assert(ele == NULL); */
/* 	return (0); */
/* } */
