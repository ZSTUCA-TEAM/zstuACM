/*
*浙江理工大学计算机协会
*严禁直接复制提交
*作弊行为将会被ACM校队禁止入队 
*@Author:   STZG
*@Language: C
*@Time:     2019年8月1日 
*/
/*======================================代码开始=====================================*/ 
#include <stdio.h>

int main(int argc, char *argv[]) {
	char ch;
	ch=getchar();
	if(ch%2)
		printf("YES\n");
	else 
		printf("NO\n");
    return 0;
}
/*======================================代码结束=====================================*/ 
/*
*getchar()可以获取一个字符 
*因为每一个字符对应ascll字码表
*而char类型的本质还是二进制存储的数
*因此可以直接判断字符的奇偶性，不用考虑是一个字符类型，在做运算时C/C++程序会自动转换为int类型
*这种转换称之为隐式类型转换 
*/																	
