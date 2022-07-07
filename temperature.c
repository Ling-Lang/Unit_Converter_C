/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temperature.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dylan    <kulkajens82@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:36:15 by Dylan             #+#    #+#             */
/*   Updated: 2022/07/07 10:38:33 by dylan_u          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

double	ft_c_to_f(double C)
{	
	float	one_eighth;
	float	output_f;

	one_eighth = 1.8;
	output_f = (C * one_eighth) + 32;
	printf("%0.01f \n", output_f);
	return (output_f);
}

double	ft_f_to_c(double F)
{
	float	output_c;

	output_c = ((F - 32) / 1.8);
	printf("%0.01f \n", output_c);
	return (output_c);
}
