/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- < rbomfim-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:55:08 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/01/31 16:25:27 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return ;
}

/* int	main ()
{
	char str[] = "Rubens";
	ft_putstr(str);
	return (0);
} */
