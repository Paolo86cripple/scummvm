/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

//=============================================================================
//
// Room version constants and information
//
//=============================================================================

#ifndef AGS_SHARED_GAME_ROOM_VERSION_H
#define AGS_SHARED_GAME_ROOM_VERSION_H

namespace AGS3 {

/* room file versions history8:  final v1.14 release9:  intermediate v2 alpha releases10:  v2 alpha-7 release11:  final v2.00 release12:  v2.08, to add colour depth byte13:  v2.14, add walkarea light levels14:  v2.4, fixed so it saves walkable area 1515:  v2.41, supports NewInteraction16:  v2.517:  v2.5 - just version change to force room re-compile for new charctr struct18:  v2.51 - vector scaling19:  v2.53 - interaction variables20:  v2.55 - shared palette backgrounds21:  v2.55 - regions22:  v2.61 - encrypt room messages23:  v2.62 - object flags24:  v2.7  - hotspot script names25:  v2.72 - game id embedded26:  v3.0 - new interaction format, and no script source27:  v3.0 - store Y of bottom of object, not top28:  v3.0.3 - remove hotspot name length limit29:  v3.0.3 - high-res coords for object x/y, edges and hotspot walk-to point30:  v3.4.0.4 - tint luminance for regions31:  v3.4.1.5 - removed room object and hotspot name length limits32:  v3.5.0 - 64-bit file offsets33:  v3.5.0.8 - deprecated room resolution, added mask resolutionSince then format value is defined as AGS version represented as NN,NN,NN,NN.
*/
enum RoomFileVersion {
	kRoomVersion_Undefined = 0,
	kRoomVersion_pre114_3 = 3,  // exact version unknown
	kRoomVersion_pre114_4 = 4,  // exact version unknown
	kRoomVersion_pre114_5 = 5,  // exact version unknown
	kRoomVersion_pre114_6 = 6,  // exact version unknown
	kRoomVersion_114 = 8,
	kRoomVersion_200_alpha = 9,
	kRoomVersion_200_alpha7 = 10,
	kRoomVersion_200_final = 11,
	kRoomVersion_208 = 12,
	kRoomVersion_214 = 13,
	kRoomVersion_240 = 14,
	kRoomVersion_241 = 15,
	kRoomVersion_250a = 16,
	kRoomVersion_250b = 17,
	kRoomVersion_251 = 18,
	kRoomVersion_253 = 19,
	kRoomVersion_255a = 20,
	kRoomVersion_255b = 21,
	kRoomVersion_261 = 22,
	kRoomVersion_262 = 23,
	kRoomVersion_270 = 24,
	kRoomVersion_272 = 25,
	kRoomVersion_300a = 26,
	kRoomVersion_300b = 27,
	kRoomVersion_303a = 28,
	kRoomVersion_303b = 29,
	kRoomVersion_3404 = 30,
	kRoomVersion_3415 = 31,
	kRoomVersion_350 = 32,
	kRoomVersion_3508 = 33,
	kRoomVersion_Current = kRoomVersion_3508
};

} // namespace AGS3

#endif
