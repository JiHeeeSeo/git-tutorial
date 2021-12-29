#ifndef __HEADER_H__
#define __HEADER_H__

#define _CRT_SECURE_NO_WARINGS
#include <cstdio>
#include <map>
#include <string>

int getInt(const char* prompt);
std::string getString(const char* prompt);

class Dictionary {
private:
	std::map<std::string, std::string> words;
public:
	void insertworld(const std::string& word, const std::string& meaning);
	bool exists(const std::string& word);
	std::string getMean(const std::string& word);
};

#endif // !__HEADER_H__
