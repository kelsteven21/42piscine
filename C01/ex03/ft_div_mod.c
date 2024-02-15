/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- < rbomfim-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:50:10 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/01 14:46:13 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main (){
	int a;
	int b;
	int *div;
	int *mod;

	a = 10;
	b = 6;
	div = &a;
	mod = &b;

	ft_div_mod (a, b, div, mod); 
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
} */
