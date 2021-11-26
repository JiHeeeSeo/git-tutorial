#include "GameEngine.h"

void GameEngine::init() {
	makeUserBlock();
}

void GameEngine::next(float dt, char keyboardInput) {
	if (state == GameState::GAMEOVER) return;
	elapsed += dt;
	if (elapsed >= 0.5f) {
		if (canGoDown()) blockY++;
		// userblock을 gameGridData에 전사
		else {
			trans();
			if (gameOverDecision()) state = GameState::GAMEOVER;
		}

		elapsed -= 0.5f;
	}

	controlCheck += dt;

	if (keyboardInput == 'a' && canGoLeft() && controlCheck > 0.1) { blockX--; controlCheck = 0.0f; }
	if (keyboardInput == 'd' && canGoRight() && controlCheck > 0.1) { blockX++; controlCheck = 0.0f; }
	if (keyboardInput == 's' && canGoDown() && controlCheck > 0.1) { blockY++; controlCheck = 0.0f; }
	if (keyboardInput == 'w' && canRotate() && controlCheck > 0.2f) { rotate();  controlCheck = 0.0f; }
	//if (keyboardInput = 'w' && (canRotate()) && controlCheck > 1.0f) { rotate(), controlCheck = 0.0f; }

}

bool GameEngine::canGoDown() {
	for (int i = 0; i < USERBLOCK_SIZE; i++)
		for (int k = 0; k < USERBLOCK_SIZE; k++) {
			if (userBlock[i][k] == 1 && i + blockY + 1 >= GRID_HEIGHT) return false;
			if (userBlock[i][k] == 1 && gameGridData[i + blockY + 1][k + blockX] == 1) return false;
		}
	return true;
}

bool GameEngine::canGoLeft(){
		for (int i = 0; i < USERBLOCK_SIZE; i++)
			for (int k = 0; k < USERBLOCK_SIZE; k++) {
				if (userBlock[i][k] == 1 && k + blockX - 1 < 0) return false;
				if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX - 1] == 1) return false;
			}

		return true;
}

bool GameEngine::canGoRight() {
	for (int i = 0; i < USERBLOCK_SIZE; i++)
		for (int k = 0; k < USERBLOCK_SIZE; k++) {
			if (userBlock[i][k] == 1 && k + blockX + 1 > GRID_WIDTH - 1) return false;
			if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX + 1]) return false;
		}

	return true;
}

bool GameEngine::canRotate() {
	for (int i = 0; i < USERBLOCK_SIZE; i++)
		for (int k = 0; k < USERBLOCK_SIZE; k++) {
			if (userBlock[i][k] == 1 && k + blockX + 1 > GRID_WIDTH - 1) return false;
			if (userBlock[i][k] == 1 && k + blockX - 1 < 0) return false;
			if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX - 1] == 1) return false;
			if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX + 1]) return false;
		}

	return true;
}

bool GameEngine::isLineFilled(int y) {
	for (int i = 0; i < GRID_WIDTH; i++)
		if (gameGridData[y][i] == 0) return false;
	return true;
}

void GameEngine::eraseLine(int y) {
	for (int i = 0; i < GRID_WIDTH; i++)
		gameGridData[y][i] = 0;
}

void GameEngine::drop(int y) {
	for (int i = y; i >= 0; i--)
		for (int k = 0; k < GRID_WIDTH; k++)
			gameGridData[i][k] = i - 1 < 0 ? 0 : gameGridData[i - 1][k];
}

void GameEngine::trans() {
	for (int i = 0; i < USERBLOCK_SIZE; i++)
		for (int k = 0; k < USERBLOCK_SIZE; k++) {
			int _x = k + blockX;
			int _y = i + blockY;
			//gameGridData[_y][_x] = userBlock[i][k] == 1 ? userBlock[i][k] : gameGridData[_y][_x];
			gameGridData[_y][_x] = userBlock[i][k] | gameGridData[_y][_x];
		}

	// TODO: 한 줄이 가득 차 있는지 확인
	for (int i = 0; i < GRID_HEIGHT; i++) {
		if (isLineFilled(i)) { eraseLine(i); drop(i); }
	}

	// 새로운 블록 생성
	makeUserBlock();
}

bool GameEngine::gameOverDecision() {
	for (int i = 0; i < USERBLOCK_SIZE; i++)
		for (int k = 0; k < USERBLOCK_SIZE; k++)
			if (userBlock[i][k] == 1 && gameGridData[i + blockY][k + blockX] == 1) return true;
	return false;
}

void GameEngine::makeUserBlock() {
	blockX = GRID_WIDTH / 2 - USERBLOCK_SIZE / 2;
	blockY = 0;

	// TODO: 랜덤을 통해서 새로운 블록을 만든다.


	int various = rand() % 3;
	for (int i = 0; i < USERBLOCK_SIZE; i++)
		for (int k = 0; k < USERBLOCK_SIZE; k++)
			userBlock[i][k] = userBlockVarious[various][i][k];
}

void GameEngine::rotate() {
	// 회전을 구현해 보세요.
	// 사용하는거 userBlock


	int tmp[USERBLOCK_SIZE][USERBLOCK_SIZE] = { 0, };

	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int k = 0; k < USERBLOCK_SIZE; k++) {
			tmp[i][k] = userBlock[USERBLOCK_SIZE - k - 1][i];
		}
	}
	for (int i = 0; i < USERBLOCK_SIZE; i++)
		for (int k = 0; k < USERBLOCK_SIZE; k++)
			userBlock[i][k] = tmp[i][k];

}

void GameEngine::makeDisplayData() {
	for (int i = 0; i < GRID_HEIGHT; i++)
		for (int k = 0; k < GRID_WIDTH; k++)
			displayData[i][k] = gameGridData[i][k];


	for (int i = 0; i < USERBLOCK_SIZE; i++) {
		for (int k = 0; k < USERBLOCK_SIZE; k++) {
			if (i + blockY < 0 || i + blockY > GRID_HEIGHT) {
				// DO NOTHING
			}
			else if (k + blockX < 0 || k + blockX > GRID_WIDTH) {
				// DO NOTHING
			}
			else {
				// displayData[i+blockY][k+blockX] 
				//			= userBlock[i][k] == 1? userBlock[i][k] : displayData[i+blockY][k+blockX];
				int _x = k + blockX;
				int _y = i + blockY;
				displayData[_y][_x] = userBlock[i][k] | displayData[_y][_x];
			}
		}
	}
}
