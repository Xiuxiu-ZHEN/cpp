#include <iostream>//头文件,iostream = “input/output stream”, 即 “输入/输出流”。可以允许使用:
/*
std::cout   -printf标准输出（输出到屏幕）
std::cin	-scanf标准输入（从键盘读）
std::cerr	-fprintf(stderr, …)标准错误输出（显示错误信息）
std::clog	-标准日志输出（缓冲的错误输出）
*/
/*
#include <iostream>
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
*/
/*
#include <iostream>
int main() {
    int age;
    std::cout << "请输入你的年龄: ";
    std::cin >> age;   // 从键盘读取一个整数，存入 age
    std::cout << "你今年 " << age << " 岁。\n";
    return 0;
}
*/
/*
int age = 20;
double pi = 3.14159;
char grade = 'A';
printf("姓名: %s\n", name);
printf("年龄: %d\n", age);
printf("成绩: %c\n", grade);

int age;
float height;
char name[50];
scanf("%s %d %f", name, &age, &height);
*/
#include <string.h>
//C 的 .h 文件在 C++ 里大多数还能用，
//但 C++ 推荐用 <cxxx> 版本，所有函数都在 std:: 命名空间中。
/*
vector 是一种“动态数组（dynamic array）”，
但它比普通数组（array）更聪明、更安全、更好用。名字来源于数学里的“向量（vector）”，但在 C++ 里可以理解为：一个可以自动扩容的数组。
*/
/*
可以连续使用多个 <<：
std::cout << "Hello, " << "world!" << std::endl;这其实相当于：
std::cout << "Hello, ";
std::cout << "world!";
std::cout << std::endl;
每个 << 都“把右边的东西送进左边的流里”，
*/
int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;//“大声而难以忍受的反馈噪音”
		return (0);//程序正常结束
	}
	for (int i = 1; i < ac; i++)//依次处理命令行的每一个参数
	{
		for (size_t j = 0; j < strlen(av[i]); j++)//逐个处理当前单词里的每一个字符
			std::cout << (char)toupper(av[i][j]);//用toupper把av[i][j]这个字符转换成大写;用(char)把 toupper 的返回值（int）强制转回字符类型
		if (i < ac - 1)//如果当前不是最后一个参数，就输出一个空格
			std::cout << " ";
	}
	std::cout << std::endl;//在所有单词输出完之后，输出一个换行。
	return (0);
}
