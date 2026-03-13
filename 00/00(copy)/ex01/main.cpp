#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>//用于输入输出（std::cout、std::cin）

int main()
{
	std::string	input;
	PhoneBook	pb;

	std::cout << "PhoneBook> ";//打印提示符 PhoneBook>，等待输入
	std::cin >> input; //读取一个以空白分隔的“单词”（空格/回车会结束读取）
	while (input != "EXIT")
	{
		while (input != "EXIT" && input != "ADD" && input != "SEARCH")
		{
			std::cout << "PhoneBook> ";
			std::cin >> input;
		}//当命令既不是 EXIT、也不是 ADD、也不是 SEARCH 时，就不断提示用户重新输入。
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			pb.add();//向电话簿添加一个联系人
		else if (input == "SEARCH")
			pb.search();//显示联系人列表并允许查看细节
		std::cout << "PhoneBook> ";//本轮命令处理完毕，再次打印提示符并读取下一条命令，回到外层 while 的循环条件判断处。
		std::cin >> input;
	}
	return (0);
}
/*
| 类名         | 中文含义  | 职责（干的活）                     |
| ----------- | ------- | ---------------------------------- |
| `Contact`   | “联系人” | 保存一个人的信息（名字、昵称、电话、秘密）       |
| `PhoneBook` | “电话簿” | 保存 **很多联系人**，并负责添加、搜索、显示等功能 |


🧱命名空间（namespace）是 C++ 用来给名字分组、防止名字冲突的机制。
假设你有两个不同的人，都写了一个叫 print() 的函数：
	A::print();  // 输出：来自 A
	B::print();  // 输出：来自 B
这样两个 print() 就不会冲突了。
所以, std 是 C++ 标准库（standard library） 的命名空间。所有 C++ 自带的类、函数、对象几乎都在这里面。
🧱为什么不直接写 cout、cin？
C++ 允许你在文件开头写：using namespace std;
然后你就可以直接写：cout << "Hello" << endl;
⚠️ 但在 42 学校的项目里（包括你的 PhoneBook），禁止使用 using namespace std;。


*/
