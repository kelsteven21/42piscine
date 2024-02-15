/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- < rbomfim-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:59:58 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/01/31 20:53:35 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	g;

	g = 'z';
	while (g >= 'a')
	{
		write(1, &g, 1);
		g--;
	}
}
