/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dylan    <kulkajens82@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 00:36:15 by Dylan             #+#    #+#             */
/*   Updated: 2019/11/25 00:54:49 by Dylan            ###   ########.me       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h> 

double	ft_C_to_F(double C)
{	
	// Convert the temperature from Celsius to Fahrenheit and print it to  the console.
	float x = 9.0000001/5;
	double F = (C * x) + 32;
	printf("%f \n", F);
	return (F);

}