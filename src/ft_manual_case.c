/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manual_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan_u <dylan_u@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:01:01 by dylan             #+#    #+#             */
/*   Updated: 2022/07/07 15:05:00 by dylan_u          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	ft_c_to_f(double C);
double	ft_f_to_c(double F);
int		outputc(void);
int		inputc(void);
int		ft_manual_case2(void);

double	ft_manual_case(int choice)
{
	double	c;

	if (choice == 1)
	{
		inputc();
		scanf("%lf", &c);
		outputc();
		ft_c_to_f(c);
	}
	else if (choice == 2)
	{
		ft_manual_case2();
	}
	return (0);
}

int	inputc(void)
{
	printf("Put the temperature in C it will be converted to F \n");
	return (0);
}

int	outputc(void)
{
	printf("are this much in F \n");
	return (0);
}

int	ft_manual_case2(void)
{
	double	f;

	printf("Input your F wich will be converted \n");
	scanf("%lf", &f);
	printf("are this much in C\n");
	ft_f_to_c(f);
}
