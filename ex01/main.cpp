/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:05:01 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/26 00:12:26 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data ptr;
    ptr.m = 13;
    ptr.n = 37;

    std::cout << &ptr.m << std::endl;
    std::cout << &ptr.n << std::endl;

    uintptr_t raw = Serialization::serialize(&ptr);
    Data *ptr2 = Serialization::deserialize(raw);

    std::cout << ptr.m << std::endl;
    std::cout << raw << std::endl;
    std::cout << ptr2->n << std::endl;

    return 0;
}