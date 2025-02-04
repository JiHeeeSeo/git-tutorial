﻿/* 구현 파일 */
#include <cmath>
#include <cassert>
#include "time.h"

/* 매개변수가 있는 생성자는 3개의 값을 받고
객체를 초기화해서 생성
시, 분, 초를 올림하고 부적절한 값은아니지 확인*/
Time::Time(int hr, int mi, int se):hours(hr), minutes(mi), seconds(se){
	normalize();
}

/* Time 객체의 기본 생성자 */
Time::Time():hours(0), minutes(0), seconds(0)
{
}

Time::~Time()
{
}

/* print 함수는 접근자 함수 화면에 시간을 출력*/
void Time::print() const{
	cout << hours << ":" << minutes << ":" << seconds << endl;
}

/* tick 함수는 설정자 함수
객체의 시간에 1초를 더함*/
void Time::tick(){
	seconds++;
	normalize();
}

/* normalize 함수는 불변 속성을 확인
불변 속성에 문제가 있는 경우 프로그램을 중단
괜찮다면 시, 분, 초를 올림 */
void Time::normalize() {
	// 음수 처리
	if ((hours < 0) || (minutes < 0) || (seconds < 0)) {
		cout << "유효하지 않은 자료입니다. 프로그램을 중단합니다." << endl;
		assert(false);
	}

	// 범위 조정
	if (seconds > 59) {
		int temp = seconds / 60;
		seconds = seconds % 60;
		minutes = minutes + temp;
	}

	if (minutes > 59) {
		int temp = minutes / 60;
		minutes = minutes % 60;
		hours = hours + temp;
	}

	if (hours > 23) {
		hours %= 24;
	}

}
