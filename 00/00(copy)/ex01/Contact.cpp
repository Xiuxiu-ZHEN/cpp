#include "Contact.hpp"//因为 Contact.hpp 里有类 Contact 的“定义”

std::string	Contact::getfirstname()
{
	return (firstname);
}
std::string	Contact::getlastname()
{
	return (lastname);
}
std::string	Contact::getnickname()
{
	return (nickname);
}
std::string	Contact::getnumber()
{
	return (number);
}
std::string	Contact::getsecret()
{
	return (secret);
}
void	Contact::setfirstname(std::string fn)
{
	firstname = fn;
}
void	Contact::setlastname(std::string ln)
{
	lastname = ln;
}
void	Contact::setnickname(std::string nn)
{
	nickname = nn;
}
void	Contact::setnumber(std::string num)
{
	number = num;
}
void	Contact::setsecret(std::string s)
{
	secret = s;
}

void	Contact::displayContact()
{
	std::cout << "First name : " << getfirstname() << std::endl;
	std::cout << "Last name : " << getlastname() << std::endl;
	std::cout << "Nick name : " << getnickname() << std::endl;
	std::cout << "Number : " << getnumber() << std::endl;
	std::cout << "Darkest secret : " << getsecret() << std::endl;
}
/*
displayMenu() 的作用就是“显示联系人列表里的一行”。
当程序在 “搜索（SEARCH）” 时，它会打印一个表格：
Index | First name | Last name | Nickname
每个联系人会打印一行，比如：
    1|     Alice|     Zhang|       Ali

函数内部一共有三组几乎相同的代码, 每一组负责打印一格;
如果太长（>10），就截断并在最后加一个点.。
如果太短（<10），就在前面补空格，让它右对齐。

std::string 是一个“字符串的封装版本”，
它不仅保存文本，还自带很多操作字符串的函数。
字符串变量.length()
字符串变量.substr()
.表示访问这个对象里的内容: 对象.成员
	如果“成员”是变量 → 访问这个变量。比如lastname.length
	如果“成员”是函数 → 调用这个函数。比如lastname.substr(0, 9)
*/
void	Contact::displayMenu()
{
	if (firstname.length() > 10)//取从第0个字符开始的9个字符,然后加上 "." 代表截断,再加 "|" 作为列分隔符
		std::cout << firstname.substr(0, 9) << ".|";
	else             //std::string(7, ' ') 生成 7 个空格 " "     << 然后拼上 "Bob|"
		std::cout << std::string(10 - firstname.length(), ' ') << firstname << "|";
	if (lastname.length() > 10)
		std::cout << lastname.substr(0, 9) << ".|";
	else
		std::cout << std::string(10 - lastname.length(), ' ') << lastname << "|";
	if (nickname.length() > 10)
		std::cout << nickname.substr(0, 9) << ".|" << std::endl;
	else
		std::cout << std::string(10 - nickname.length(), ' ') << nickname << std::endl;
}
/*
这确实是一个函数，但它是一个非常特殊的函数——叫做 构造函数（constructor）
把传进来的字符串数组里的内容，复制到对象自己的成员变量里,也就是初始化相关的变量
它在创建 Contact 对象时自动被调用!!!，把传进来的 5 个字符串保存到对象的 5 个成员变量里。*/
Contact::Contact(std::string s[5])
{	firstname = s[0];
	lastname = s[1];
	nickname = s[2];
	number = s[3];
	secret = s[4];
}
Contact::Contact()
{}
Contact::~Contact()
{}
/*
一、普通函数 vs 构造函数
类型		例子			谁调用它		作用
普通函数	void sayHello()	你手动调用		执行某个任务
构造函数	Contact(...)	编译器自动调用	 创建并初始化对象
也就是说，这个函数不是你自己调用的，而是当你创建一个 Contact 对象时，C++ 自动调用它来帮你“建造”一个对象。

二、怎么知道它是构造函数？有三个“明显特征”
✅ 函数名字和类名完全一样（Contact）	
✅ 没有返回类型（不是 void、不是 int）	
✅ 通常用来初始化类的成员变量

三、它在什么时候被调用？
当你“创建一个对象”的时候，它会自动执行。
比如在你的 PhoneBook::add() 里：  Contact c(input);
这里的 input 是一个字符串数组 std::string input[5];
那么程序会自动执行：
	→ 调用 Contact::Contact(std::string s[5])
	→ 并把 input 传进去

四 举例子:
	std::string info[5] = {"Alice", "Zhang", "Ali", "123456", "sleepy"};
	Contact c(info);
当这两行执行时：
1️⃣ C++ 会创建一个新的 Contact 对象 c；
2️⃣ 然后自动调用你写的构造函数，把 info 数组传进去；
3️⃣ 在函数体内，它会执行：
	firstname = "Alice";
	lastname  = "Zhang";
	nickname  = "Ali";
	number    = "123456";
	secret    = "sleepy";
4️⃣ 最终 c 这个联系人对象就被“填充”好了。
*/
