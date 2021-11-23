#include "TetrisHelper.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

#define GRID_WIDTH 7
#define GRID_HEIGHT 10
#define USERBLOCK_SIZE 3

int displayData[GRID_HEIGHT][GRID_WIDTH] = { 0, };

class Display {
public:
	void draw() {
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				if (displayData[i][k] == 0)
					drawPosition(k, i, false);
				else
					drawPosition(k, i, true);
			}
		}
	}
};

class GameEngine {
public:
	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = { 
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 0, 0, 0},
		{0, 1, 1, 0, 0, 0, 0},
		{1, 1, 1, 0, 0, 0, 0}
	};
	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 
		{1, 0, 0},
		{1, 0, 0},
		{1, 0, 0},
	};
	int blockX = 0;
	int blockY = 0;

	float elapsed = 0.0f;

	void init() {
		// 최초 게임 엔진 초기화
	}

	// while loop에서 매번 불려지는 함수
	void next(float dt, char keyboardInput) {
		elapsed += dt;
		if (elapsed >= 0.5f) {
			blockY++;
			elapsed -= 0.5f;
		}
	}

	// 게임 데이터를 실제 화면에 출력
	void makeDisplayData() {
		for (int i = 0; i < GRID_HEIGHT; i++) {
			for (int k = 0; k < GRID_WIDTH; k++) {
				displayData[i][k] = gameGridData[i][k];
			}
		}

		for (int i = 0; i < USERBLOCK_SIZE; i++) {
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (i + blockY < 0 || blockY > GRID_HEIGHT) {
					// DO NOTHING
				}
				else if (k + blockX < 0 || k + blockX > GRID_WIDTH) {
					// DO NOTHING
				}
				else{
					int _x = k + blockX;
					int _y = i + blockY;
					displayData[_y][_x] = userBlock[i][k] | displayData[_y][_x];
				}
			}
		}
	}

};