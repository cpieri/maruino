/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   image.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:20:56 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 14:54:07 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __IMAGE_HPP__
# define __IMAGE_HPP__

# include <Gamebuino-Meta.h>

const uint16_t UnicornData[] = {25,20,1, 1, 0, 0, 0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x9008,0x9008,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x9008,0x9008,0xca30,0xca30,0xca30,0x9008,0xF81F,0xf720,0xfd42,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0x9008,0xca30,0xca30,0xca30,0xf720,0xf720,0xf720,0xfd42,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x0,0xca30,0xca30,0xca30,0x9008,0xca30,0xfd42,0xf720,0xf720,0xf720,0xfd42,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x0,0xffff,0x9008,0x9008,0xca30,0xca30,0xfd42,0xf720,0xf720,0xfd42,0xca30,0xca30,0x9008,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x0,0xffff,0xffff,0x9008,0x9008,0x9008,0xca30,0xfd42,0xfd42,0xca30,0xca30,0x9008,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0x0,0xffff,0xffff,0xffff,0x9008,0x9008,0x9008,0x9008,0x9008,0x9008,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0x0,0xffff,0xffff,0x44a,0xffff,0xffff,0xffff,0x44a,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x9008,0x9008,0x0,0xffff,0xffff,0x8668,0xffff,0xffff,0xffff,0x8668,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x9008,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x9008,0x0,0x0,0x0,0xffff,0xffff,0xacd0,0xffff,0xffff,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0x9008,0xF81F,0x0,0x0,0x0,0x9008,0x9008,0x0,0xffff,0xffff,0xffff,0x0,0xffff,0xffff,0xacd0,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0xca30,0xca30,0x0,0xffff,0xffff,0xffff,0x0,0x0,0xffff,0xffff,0xffff,0xffff,0xffff,0x0,0x0,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0xca30,0x0,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0xca30,0x0,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0x0,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xF81F,0x9008,0xca30,0xca30,0x9008,0x0,0xffff,0xffff,0xffff,0x0,0x0,0x0,0xffff,0xffff,0xffff,0x0,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x9008,0xca30,0xca30,0xca30,0x9008,0x0,0xffff,0xffff,0x0,0xffff,0xffff,0x0,0xffff,0xffff,0x0,0xffff,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0xca30,0xca30,0xca30,0x9008,0xF81F,0x0,0xffff,0xffff,0x0,0xffff,0x0,0x0,0xffff,0xffff,0x0,0xffff,0x0,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0x9008,0x9008,0x9008,0xF81F,0xF81F,0x0,0xfeb2,0xfeb2,0xcc68,0xfeb2,0xcc68,0x0,0xfeb2,0xfeb2,0xcc68,0xfeb2,0xcc68,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xcc68,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F,0xF81F};
Image UnicornI = Image(UnicornData);

#endif