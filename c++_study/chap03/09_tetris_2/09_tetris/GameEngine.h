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

	// while loop���� �Ź� �ҷ����� �Լ�
	void next(float dt, char keyboardInput);

	// ����� �Ʒ��� ������ �� �ֳ�
	bool canGoDown();

	// ����� �������� �� �� �ֳ�
	bool canGoLeft();

	// ����� ���������� �� �� �ֳ�
	bool canGoRight();

	bool canRotate();

	bool isLineFilled(int y);

	void eraseLine(int y);

	// y��ǥ�� �������� ��ĭ�� �Ʒ��� ����
	void drop(int y);

	// userblock�� gameGrid�� �����ϴ� �Լ�
	void trans();

	bool gameOverDecision();

	void makeUserBlock();

	void rotate();

	// ���� �����͸� ���� ȭ�鿡 ���
	void makeDisplayData();
};

#endif