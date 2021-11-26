#ifndef __GAME_ENGINE_H__
#define __GMAE_ENGINE_H__
#include "Header.h"

class GameEngine {
public:
	enum class GameState {
		PLAYING, GAMEOVER
	};
	GameState state = GameState::PLAYING;

	int gameGridData[GRID_HEIGHT][GRID_WIDTH] = { 0, };
	int userBlock[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 0, };

	int userBlockVarious[3][USERBLOCK_SIZE][USERBLOCK_SIZE] = {
		{
			{0, 1, 0},
			{0, 1, 0},
			{0, 1, 0},
		},
		{
			{0, 0, 0},
			{0, 1, 1},
			{0, 1, 1},
		},
		{
			{0, 0, 0},
			{0, 1, 0},
			{1, 1, 0},
		}
	};

	int blockX = 0;
	int blockY = 0;

	float elapsed = 0.0f;
	float controlCheck = 0.0f;

	void init();

	// while loop에서 매번 불려지는 함수
	void next(float dt, char keyboardInput);

	// 블록이 아래로 내려갈 수 있냐
	bool canGoDown();

	// 블록이 왼쪽으로 갈 수 있냐
	bool canGoLeft();

	// 블록이 오른쪽으로 갈 수 있냐
	bool canGoRight();

	bool canRotate();

	bool isLineFilled(int y);

	void eraseLine(int y);

	// y좌표를 기준으로 한칸씩 아래로 내림
	void drop(int y);

	// userblock을 gameGrid에 전사하는 함수
	void trans();

	bool gameOverDecision();

	void makeUserBlock();

	void rotate();

	// 게임 데이터를 실제 화면에 출력
	void makeDisplayData();
};

#endif