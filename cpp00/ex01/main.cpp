/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:40:05 by benji             #+#    #+#             */
/*   Updated: 2026/07/02 16:56:18 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

class Car
{
	public:
	Car();
	Car(std::string brand, std::string model);

	std::string brand;
	std::string model;
};

Car::Car()
{
	model = "WAHOU";
	brand = "TOP TOP";
	return ;
}

Car::Car(std::string pbrand, std::string pmodel)
{
	model = pmodel;
	brand = pbrand;
	return ;
}

int main(void)
{
	Car car1;
	Car car2("TEST1", "TEST2");

	std::cout << car1.model;
	return (1);
}