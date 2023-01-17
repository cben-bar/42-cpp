/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beni <beni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:46:39 by beni              #+#    #+#             */
/*   Updated: 2023/01/16 15:29:19 by beni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &origin);
        Cat &operator=(const Cat &origin);
        virtual ~Cat();
        
        virtual void    makeSound() const;
        Brain           &getBrain() const;
    
    private:
        Brain   *_brain;
};

#endif