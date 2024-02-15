/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- < rbomfim-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:17:21 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/01/31 16:45:18 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	troca;

	while (size >= 0)
	{
		count = 0;
		while (count < size -1)
		{
			if (tab[count] > tab[count +1])
			{
				troca = tab[count];
				tab[count] = tab[count +1];
				tab[count +1] = troca;
			}
			count++;
		}
		size--;
	}
}

/* int	main(void)
{
	int	tab [5]; 
	int	size;

	tab[] = {6, 4, 9, 8, 10};
	size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
} */
