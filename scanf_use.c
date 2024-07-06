/*
2019年11月30日19:47:05
关于scanf的用法2：
将键盘输入的字符转化为输入控制符所规定的格式数据，然后存入以输入参数的值为地址的变量当中
*/
#include <stdio.h>
int main(void)
{
	int i;
	scanf("m%d",&i);
	printf("i = %d",i);
	return 0;
 }
/* 运行结果：

F:\c语言学习\C语言代码>a.exe
124
i = 4194432
F:\c语言学习\C语言代码>gcc scanf的用法2.c

F:\c语言学习\C语言代码>a.exe
m234

F:\c语言学习\C语言代码>
F:\c语言学习\C语言代码>gcc scanf的用法2.c

F:\c语言学习\C语言代码>a.exe
m2345
i = 2345

 */