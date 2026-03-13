#include "PhoneBook.hpp"//否则编译器不知道 PhoneBook 是什么
#include <algorithm>//标准算法库（但这里没用到，可以删掉；可能是留着备用的）
#include <cstdlib>!!!!!要加上,为了使用atoi

PhoneBook::PhoneBook()//构造函数（PhoneBook()）在创建对象时自动调用，可以用来初始化成员。
{}

PhoneBook::~PhoneBook()
{}
/*
构造函数（PhoneBook()）在创建对象时自动调用，可以用来初始化成员。
析构函数（~PhoneBook()）在对象销毁时调用，可以做清理工作。
在这个程序中不需要手动分配内存，所以都为空函数 ✅。
*/
void	PhoneBook::add()
{
	static int	i = 0;//这个 i 是静态变量：它在所有 add() 调用之间共享，所以它会记录“当前是第几个联系人”。
	std::string	input[5];//声明一个字符串数组，存储 5 个输入字段:first name,last name,nickname,number,darkest secret
	std::cout << "\t\tCONTACT INFO" << std::endl;//一个\t相当于一个tab键,这里自动缩进两次,让文字看起来更居中或对齐
	std::cout << "First name : ";
	std::cin >> input[0];
	while (input[0].empty())//如果输入为空（input[x].empty()），就提醒用户重新输入
	{
		std::cout << "Input is empty" <<std::endl;//提醒用户重新输入
		std::cout << "First name : ";//提醒用户重新输入
		std::cin >> input[0];//提醒用户重新输入
	}
	std::cout << "Last name : ";
	std::cin >> input[1];
	while (input[1].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Last name : ";
		std::cin >> input[1];
	}
	std::cout << "Nickname : ";
	std::cin >> input[2];
	while (input[2].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Nick name : ";
		std::cin >> input[2];
	}
	std::cout << "Number : ";
	std::cin >> input[3];
	while (input[3].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Number : ";
		std::cin >> input[3];
	}
	std::cout << "Darkest secret : ";
	std::cin >> input[4];
	while (input[4].empty())
	{
		std::cout << "Input is empty" <<std::endl;
		std::cout << "Darkest secret : ";
		std::cin >> input[4];
	}
	Contact c(input);//调用类contact的函数把参数 input 传进去创建一个对象,这个对象叫c
	contacts[i++ % 8] = c;//把这个联系人存入数组 contacts,   %8 让索引循环回到 0–7,所以当第 9 次添加时，会覆盖第 1 个联系人。
}
/*
int a(5);        // 声明一个 int 变量 a，并用 5 初始化
std::string s("Hi"); // 声明一个 string 对象 s，并用 "Hi" 初始化
Contact c(input); // 声明一个 Contact 对象 c，并用 input 初始化
*/





//--第一个是改正后的版本

void	PhoneBook::search()
{
	std::string	input;

	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "         " << i + 1 << "|";
		contacts[i].displayMenu();
	}
	std::cout << "Select contact index : ";
	std::cin >> input;
	int index;//str转换成int
	while (input.length() != 1 || !isdigit(input[0])
		|| (std::stringstream(input) >> index, index < 1 || index > 8))  
	{   //创建一个临时的字符串流对象，把 input 放进去，然后把它解析成整数存入 index
		std::cout << "Invalid index" << std::endl;
		std::cout << "Select contact index : ";
		std::cin >> input;
	}
	std::stringstream(input) >> index;
	contacts[index - 1].displayContact();
}
/*
🧱C++ 中逗号表达式 (A, B) 的意思是： 先执行 A，然后返回 B 的结果;
(std::stringstream(input) >> index, index < 1 || index > 8)) :
先把input给std::stringstream从字符串转换成数字,把这个数字给index, 继续,如果index < 1 或者 index > 8
*/


void	PhoneBook::search()
{
	std::string	input;

	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;//每一列的含义
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "         " << i + 1 << "|";//i + 1 因为用户看到的是编号 1–8
		contacts[i].displayMenu();//调用 Contact 类的成员函数，用来显示某个联系人的简要信息;它通常会打印每列 10 个字符宽、超出部分用 . 结尾
	}
	std::cout << "Select contact index : ";//让用户选择要查看的联系人索引
	std::cin >> input;//然后验证输入是否合法:										c_str把C++的字符串对象转成C语言风格的字符串（const char*）,也就是带指针,而不是 std::string
	while (input.length() != 1 || !isdigit(input[0]) || atoi(input.c_str()) < 1 || atoi(input.c_str()) > 8)      
	{//		确保输入只有一位	 检查输入是否是数字字符（0–9）   检查数字是否小于 1            检查数字是否大于 8																																	
		std::cout << "Invalid index" << std::endl;
		std::cout << "Select contact index : ";
		std::cin >> input;
	}//根据用户输入的数字（1–8），找到电话簿数组中对应的联系人对象，然后调用它的函数 displayContact()，打印出该联系人的详细信息。
	contacts[atoi(input.c_str()) - 1].displayContact();
}
/*

🧱std::stringstream把字符串转数字的工具（C++ 类）;相当于c语言的atoi


c_str: 把 C++ 的字符串（std::string 对象）转换成 C 语言风格的字符串（const char*）。
比如 当std::string input = "123";
	input 是一个 std::string 对象。
	但是有些老式的 C 函数（比如 atoi()）不认识 std::string，
	它们只接受 C 风格字符串，即 const char* 类型
	这时候就需要：
		input.c_str()
	这个函数会返回一个 const char* 指针，指向字符串内容的首地址，并且以 '\0' 结尾（这是 C 字符串的格式）。

	所以!!
atoi(input.c_str()):
1️⃣ input → 是一个 std::string，比如 "3"
2️⃣ input.c_str() → 把它变成 "3" 的 C 字符串（类型 const char*）
3️⃣ atoi(...) → C 函数，用于把字符串转为整数
4️⃣ 结果 → atoi("3") → 返回整数 3
atoi 来自 C 语言的头文件 <cstdlib> 或 <stdlib.h>，全称 “ASCII to integer”。

input.c_str():
也就是说,input 是一个 对象，类型是 std::string. c_str() 是 std::string 这个类提供的一个成员函数.
你调用 input.c_str()，就是在说：
“让字符串对象 input 调用它内部的函数 c_str()，这个函数会返回一个指向字符串内容的 C 风格指针。”	
*/