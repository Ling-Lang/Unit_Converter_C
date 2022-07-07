/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <kulkajens82@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2000/01/01 00:00:00 by Dylan             #+#    #+#             */
/*   Updated: 2022/07/07 09:49:10 by dylan_u          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_manual_case(int choice);

int	main(void)
{	
	double	choice;

	printf("Choose what to do. \n");
	printf("1) Temperature Converter \n");
	scanf("%lf", &choice);
	ft_manual_case(choice);
	return (0);
}
