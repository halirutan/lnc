#pragma once 

#include <vector>
#include <array>
#include <Vec3.h>
#include <Vec2i.h>

const std::vector<std::vector<std::array<Vec2i,4>>> tetrominos{	
		{{Vec2i{-1,0},Vec2i{0,0},Vec2i{1,0},Vec2i{2,0}},
		 {Vec2i{1,-1},Vec2i{1,0},Vec2i{1,1},Vec2i{1,2}},
		 {Vec2i{-1,1},Vec2i{0,1},Vec2i{1,1},Vec2i{2,1}},
		 {Vec2i{0,-1},Vec2i{0,0},Vec2i{0,1},Vec2i{0,2}}},		// I, 4 orientations
		{{Vec2i{-1,0},Vec2i{0,0},Vec2i{-1,1},Vec2i{0,1}}},		// O, 1 orientation
		{{Vec2i{-1,0},Vec2i{0,0},Vec2i{1,0},Vec2i{0,1}},
		 {Vec2i{-1,0},Vec2i{0,0},Vec2i{0,-1},Vec2i{0,1}},
		 {Vec2i{-1,0},Vec2i{0,0},Vec2i{1,0},Vec2i{0,-1}},
		 {Vec2i{1,0},Vec2i{0,0},Vec2i{0,-1},Vec2i{0,1}}},		// T, 4 orientations
		{{Vec2i{-1,0},Vec2i{0,0},Vec2i{1,0},Vec2i{1,1}},
		 {Vec2i{-1,1},Vec2i{0,0},Vec2i{0,-1},Vec2i{0,1}},
		 {Vec2i{-1,0},Vec2i{0,0},Vec2i{1,0},Vec2i{-1,-1}},
		 {Vec2i{1,-1},Vec2i{0,0},Vec2i{0,-1},Vec2i{0,1}}},		// J, 4 orientations
		{{Vec2i{-1,0},Vec2i{0,0},Vec2i{1,0},Vec2i{-1,1}},
		 {Vec2i{0,-1},Vec2i{0,0},Vec2i{0,1},Vec2i{-1,-1}},
		 {Vec2i{-1,0},Vec2i{0,0},Vec2i{1,0},Vec2i{1,-1}},
		 {Vec2i{0,-1},Vec2i{0,0},Vec2i{0,1},Vec2i{1,1}}},		// L, 4 orientations
		{{Vec2i{-1,1},Vec2i{0,1},Vec2i{0,0},Vec2i{1,0}},
		 {Vec2i{-1,-1},Vec2i{-1,0},Vec2i{0,0},Vec2i{0,1}},
		 {Vec2i{-1,0},Vec2i{0,0},Vec2i{0,-1},Vec2i{1,-1}},
		 {Vec2i{0,-1},Vec2i{0,0},Vec2i{1,0},Vec2i{1,1}}},		// S, 4 orientations
		{{Vec2i{-1,0},Vec2i{0,0},Vec2i{0,1},Vec2i{1,1}},
		 {Vec2i{0,-1},Vec2i{0,0},Vec2i{-1,0},Vec2i{-1,1}},
		 {Vec2i{-1,-1},Vec2i{0,-1},Vec2i{0,0},Vec2i{1,0}},
		 {Vec2i{1,-1},Vec2i{1,0},Vec2i{0,0},Vec2i{0,1}}}  		 // Z, 4 orientations
};

const Vec3 cyan{0,1,1};
const Vec3 yellow{1,1,0};
const Vec3 magenta{1,0,1};
const Vec3 blue{0,0,1};
const Vec3 brown{0.6,0.15,0};
const Vec3 green{0,1,1};
const Vec3 red{1,0,0};
const Vec3 black{0,0,0};

const std::vector<Vec3> colors{
	cyan,
	yellow,
	magenta,
	blue,
	brown,
	green,
	red,
	black
};
