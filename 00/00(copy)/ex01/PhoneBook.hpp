#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
private://这些成员是私有的，只能在类内部访问
	Contact	contacts[8];//要想修改contacts[8]的内容只能通过类phonebook内部的函数
public://这些是外部可以访问的成员函数。
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	void	displayContacts();//应该是没有用过
};
# endif
/*
PhoneBook 是一个类（class）,它封装了数据（联系人数组）和操作（添加、搜索等）。
private 表示这些成员是私有的，只能在类内部访问。Contact contacts[8]; 定义了一个长度为 8 的联系人数组。
	每个元素是一个 Contact 对象；
	最多存 8 个联系人；
	当添加第 9 个联系人时，会替换最早的那个（这是题目要求）。
public 表示你可以在 main() 里直接调用它们，例如：
	PhoneBook pb;
	pb.add();
	pb.search();

为什么用固定数组？
	因为在 C++ Module 00 阶段 不允许使用动态内存 / STL 容器（如 vector），
	所以只能用定长数组。

| 函数名               | 类型     | 作用                               
| ------------------- | ----    | -------------------------------- 
| `PhoneBook()`       | 构造函数constructor | 给对象里的数据赋初始值、做准备工作
| `~PhoneBook()`      | 析构函数destructor | 当对象被销毁时（生命周期结束），它会自动执行，用来清理资源,没有参数、没有返回值,自动调用，不需要手动执行         
| `add()`             | 成员函数 | 向电话簿添加一个新联系人                     
| `search()`          | 成员函数 | 显示联系人列表，并允许用户选择查看详细信息            
| `displayContacts()` | 成员函数 | （通常供 `search()` 调用）打印出一个联系人表格    


*/
