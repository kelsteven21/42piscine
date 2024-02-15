/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- <rbomfim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:31:29 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/02/12 23:04:07 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
