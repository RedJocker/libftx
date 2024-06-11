/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:44:29 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/11 19:09:53 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"

t_stack	ft_stack_new(void (*destroy_element)(void *element))
{
	return ft_arraylist_new(destroy_element);
}

/* #include "ft_util.h" */
/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	t_stack s; */

/* 	s = ft_stack_new((void (*) (void *))ft_nop); */
/*     printf("hello"); */
/* 	ft_arraylist_destroy(s); */
/* 	return (0); */
/* } */
