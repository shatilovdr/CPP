/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 23:33:20 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/24 13:01:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  double area2 = (b.getX() - a.getX()) * (c.getY() - a.getY()) -
                (c.getX() - a.getX()) * (b.getY() - a.getY());
  if (area2 == 0.0) {
    return false;
  }
  double w1 = ((c.getY() - a.getY()) * (point.getX() - a.getX()) -
              (c.getX() - a.getX()) * (point.getY() - a.getY())) /
             area2;
  double w2 = ((b.getX() - a.getX()) * (point.getY() - a.getY()) -
              (b.getY() - a.getY()) * (point.getX() - a.getX())) /
             area2;
  double w3 = 1 - w2 - w1;
  return w1 > 0 && w2 > 0 && w3 > 0;
}