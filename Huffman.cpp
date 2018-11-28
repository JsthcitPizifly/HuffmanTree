// Huffman.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "func.h"

int main(void)
{
	char option;

	do {
		std::cout << "操作命令说明:" << std::endl;
		std::cout << "统计输入文件字符频度并对字符集编码输出至文件(基本要求) : 1" << std::endl;
		std::cout << "对整个文件编码并保存编码结果到一个二进制文件(中级要求) : 2" << std::endl;
		std::cout << "      文件解码并将解码结果保存为一个文本文件(高级要求) : 3" << std::endl;
		std::cout << "                                            (退    出) : 4" << std::endl;
		std::cout << "\n$$";

		std::cin >> option;
		switch (option) {
		case '1':
			char_code();
			break;
		case '2':
			File_code();
			break;
		case '3':
			File_Decode();
			break;
		}
	} while (option != '4');

	
	return 0;
}

