/* Copyright 2021 Dr. Maulik Arvind Maradia ie Dr. Mo, Mo-e-lectronics>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k000, k001, k002, k003, k004, k005, k006, k007, k008, \
    k100, k101, k102, k103, k104, k105, k106, k107, k108, \
    k200, k201, k202, k203, k204, k205, k206, k207, k208, \
    k300, k301, k302, k303, k304, k305, k306, k307, k308, \
    k400, k401, k402, k403, k404, k405, k406, k407, k408, \
    k500, k501, k502, k503, k504, k505, k506, k507, k508, \
    k600, k601, k602, k603, k604, k605, k606, k607, k608, \
    k700, k701, k702, k703, k704, k705, k706, k707, k708, \
    k800, k801, k802, k803, k804, k805, k806, k807, k808, \
    k900, k901, k902, k903, k904, k905, k906, k907, k908, \
    ka00, ka01, ka02, ka03, ka04, ka05, ka06, ka07, ka08, \
    kb00, kb01, kb02, kb03, kb04, kb05, kb06, kb07, kb08 \
) { \
    { k000, k001, k002, k003, k004, k005, k006, k007, k008 }, \
    { k100, k101, k102, k103, k104, k105, k106, k107, k108 }, \
    { k200, k201, k202, k203, k204, k205, k206, k207, k208 }, \
    { k300, k301, k302, k303, k304, k305, k306, k307, k308 }, \
    { k400, k401, k402, k403, k404, k405, k406, k407, k408 }, \
    { k500, k501, k502, k503, k504, k505, k506, k507, k508 }, \
    { k600, k601, k602, k603, k604, k605, k606, k607, k608 }, \
    { k700, k701, k702, k703, k704, k705, k706, k707, k708 }, \
    { k800, k801, k802, k803, k804, k805, k806, k807, k808 }, \
    { k900, k901, k902, k903, k904, k905, k906, k907, k908 }, \
    { ka00, ka01, ka02, ka03, ka04, ka05, ka06, ka07, ka08 }, \
    { kb00, kb01, kb02, kb03, kb04, kb05, kb06, kb07, kb08 } \
}

