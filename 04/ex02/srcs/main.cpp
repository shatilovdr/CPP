/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:22:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/25 23:51:11 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void test0();
void test1();
void test2();
void test3();

int main() {
  test0();

  return 0;
}

void test0() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  // const Animal* meta = new Animal();

  delete j;
  delete i;
  std::cout << '\n';
}

void test1() {
  {
    Animal* animals[10];
    for (int i = 0; i < 5; ++i) {
      animals[i]     = new Dog();
      animals[i + 5] = new Cat();
    }

    for (int i = 0; i < 10; ++i) {
      animals[i]->makeSound();
      delete animals[i];
    }
  }
  std::cout << '\n';
}

void test2() {
  {
    Dog dog;
    dog.AddIdea("Chase the ball");
    dog.AddIdea("Bark at the mailman");
    dog.AddIdea("Dig a hole in the backyard");
    dog.AddIdea("Chew on a bone");
    dog.AddIdea("Sniff every tree in the park");
    dog.AddIdea("Nap in the sun");
    dog.AddIdea("Fetch the stick");
    dog.AddIdea("Play tug-of-war");
    dog.AddIdea("Roll in the grass");
    dog.AddIdea("Bark at squirrels");
    dog.AddIdea("Wag tail when happy");
    dog.AddIdea("Beg for treats");
    dog.AddIdea("Cuddle with my human");
    dog.AddIdea("Go for a walk");
    dog.AddIdea("Chase my tail");
    dog.AddIdea("Splash in a puddle");
    dog.AddIdea("Watch birds");
    dog.AddIdea("Guard the house");
    dog.AddIdea("Follow my human everywhere");
    dog.AddIdea("Sleep on the couch");
    dog.AddIdea("Explore the backyard");
    dog.AddIdea("Dig up a buried bone");
    dog.AddIdea("Roll in something smelly");
    dog.AddIdea("Bark at other dogs");
    dog.AddIdea("Drink from the toilet");
    dog.AddIdea("Eat from the trash can");
    dog.AddIdea("Run in circles");
    dog.AddIdea("Jump on the bed");
    dog.AddIdea("Sniff my human's shoes");
    dog.AddIdea("Hide my toys");
    dog.AddIdea("Chase a butterfly");
    dog.AddIdea("Play with other dogs");
    dog.AddIdea("Find a comfy spot to sleep");
    dog.AddIdea("Chew on furniture");
    dog.AddIdea("Run through the house");
    dog.AddIdea("Eat grass");
    dog.AddIdea("Beg for table scraps");
    dog.AddIdea("Learn a new trick");
    dog.AddIdea("Watch TV with my human");
    dog.AddIdea("Run really fast");
    dog.AddIdea("Chase a cat");
    dog.AddIdea("Lick my human's face");
    dog.AddIdea("Splash in the pool");
    dog.AddIdea("Jump in the air");
    dog.AddIdea("Sniff the air");
    dog.AddIdea("Play with a squeaky toy");
    dog.AddIdea("Hide under the bed");
    dog.AddIdea("Get a belly rub");
    dog.AddIdea("Paw at the door");
    dog.AddIdea("Chase shadows");
    dog.AddIdea("Snuggle under a blanket");
    dog.AddIdea("Bark at the vacuum cleaner");
    dog.AddIdea("Eat a yummy treat");
    dog.AddIdea("Roll over");
    dog.AddIdea("Lick my paws");
    dog.AddIdea("Scratch an itch");
    dog.AddIdea("Run up and down the stairs");
    dog.AddIdea("Bark at the doorbell");
    dog.AddIdea("Sniff another dog");
    dog.AddIdea("Shake water off my fur");
    dog.AddIdea("Play in the snow");
    dog.AddIdea("Lay on my human's lap");
    dog.AddIdea("Watch cars go by");
    dog.AddIdea("Sleep in my crate");
    dog.AddIdea("Chew on a stick");
    dog.AddIdea("Look out the window");
    dog.AddIdea("Sniff the couch");
    dog.AddIdea("Lick a human's hand");
    dog.AddIdea("Run through a field");
    dog.AddIdea("Eat my food quickly");
    dog.AddIdea("Play in the leaves");
    dog.AddIdea("Jump on my human");
    dog.AddIdea("Lick the floor");
    dog.AddIdea("Bark at a stranger");
    dog.AddIdea("Fetch a newspaper");
    dog.AddIdea("Sniff a new person");
    dog.AddIdea("Cuddle with a toy");
    dog.AddIdea("Sleep in my human's bed");
    dog.AddIdea("Play with a ball");
    dog.AddIdea("Bark at thunder");
    dog.AddIdea("Sniff the ground");
    dog.AddIdea("Follow my human to the kitchen");
    dog.AddIdea("Lick the furniture");
    dog.AddIdea("Chase a frisbee");
    dog.AddIdea("Beg for a belly rub");
    dog.AddIdea("Run through a tunnel");
    dog.AddIdea("Chew on my leash");
    dog.AddIdea("Bark at fireworks");
    dog.AddIdea("Watch my human cook");
    dog.AddIdea("Sniff my human's clothes");
    dog.AddIdea("Lick my human's feet");
    dog.AddIdea("Play with a rope toy");
    dog.AddIdea("Dig in the sand");
    dog.AddIdea("Run through tall grass");
    dog.AddIdea("Find a hidden toy");
    dog.AddIdea("Chase a ball down a hill");
    dog.AddIdea("Play with a plastic bottle");
    dog.AddIdea("Bark at a fly");
    dog.AddIdea("Sniff my human's hair");
    dog.AddIdea("Wag my tail at a friend");
    dog.AddIdea("The last idea!");
    dog.PrintIdeas();
  }
  std::cout << '\n';
}

void test3() {
  Dog dog;
  Dog dog2;

  dog.AddIdea("Chase the ball");
  dog.AddIdea("Bark at the mailman");

  dog2.AddIdea("Jump in the air");
  dog2.AddIdea("Sniff the air");
  dog2.AddIdea("Play with a squeaky toy");
  dog2.AddIdea("Hide under the bed");

  dog2 = dog;

  dog.AddIdea("Play with a rope toy");
  dog2.AddIdea("Bark at a fly");
  std::cout << '\n';

  dog.PrintIdeas();
  std::cout << '\n';

  dog2.PrintIdeas();
  std::cout << '\n';
}