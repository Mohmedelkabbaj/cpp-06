/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:04:10 by mel-kabb          #+#    #+#             */
/*   Updated: 2024/02/26 00:02:37 by mel-kabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{
}

Serialization::Serialization(Serialization const &other)
{
    *this = other;
}

Serialization &Serialization::operator=(Serialization const &other)
{
    (void)other;
    return *this;
}

Serialization::~Serialization()
{
}

uintptr_t Serialization::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serialization::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}