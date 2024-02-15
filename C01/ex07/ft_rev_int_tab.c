/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbomfim- < rbomfim-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:37:54 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/01/31 12:59:00 by rbomfim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;
	int	lenght;

	lenght = size;
	count = 0;
	while (count < (lenght / 2))
	{
		temp = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = temp;
		count++;
		size--;
	}
}

/* int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int size;
    int tot;

    size = 5;
    tot = 0;
    ft_rev_int_tab(tab, size);
    while(tab[tot] != '\0')
    {
        printf("%d", tab[tot]);
        tot++;
    }
} */