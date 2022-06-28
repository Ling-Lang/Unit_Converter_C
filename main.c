/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan <kulkajens82@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2000/01/01 00:00:00 by Dylan             #+#    #+#             */
/*   Updated: 2022/06/28 17:11:14 by dylan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

double	ft_c_to_f(double C);
double	ft_manual_case(int choice);

int	main(void)
{	
	double	c;
	double	choice;

	scanf("%lf", &choice);
	scanf("%lf", &c);
	ft_manual_case(choice);
	ft_c_to_f(c);
	return (0);
}
