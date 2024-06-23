/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 21:55:06 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/09 09:20:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

class Point {
 public:
  Point();
  Point(const float x, const float y);
  Point(const Point& other);

  ~Point();

  float getX() const;
  float getY() const;

  Point& operator=(const Point& other);

 private:
  const Fixed _x;
  const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif