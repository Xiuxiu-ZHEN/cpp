#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
/*
一个类（class）里可以有很多“成员”：
可以有成员变量（保存数据，比如名字、电话）
也可以有成员函数（操作这些数据，比如设置、获取）
*/
/*

| 区域       | 谁能访问  | 用来放什么                |
| --------- | -------- | ----------------------- |
| `private` | 只有类内部 | 成员变量、内部工具函数      |
| `public`  | 所有代码   | 接口函数（add、search、getXXX） |

private的存在规定了,外部要想修改class内部的函数内容,变量就必须要通过private规定的方法来修改,不然外部人员就无法修改,所以这样就很好地保护了class的数据内容
*/
class Contact
{
private://只有类自己的成员函数能访问这些变量；
//外部的人（包括其他类和 main 函数）都不能直接访问。
	std::string	firstname;
	std::string	lastname;//五个属性全部是private
	std::string	nickname;
	std::string	number;
	std::string	secret;
public:
	std::string	getfirstname();//必须有getter可以访问前边这五个属性,当用户输入序号时,可以根据检索相应序号对应的五条信息
	std::string	getlastname();
	std::string	getnickname();
	std::string	getnumber();
	std::string	getsecret();
	void		setfirstname(std::string fn);//必须要有setter可以设置这五个属性
	void		setlastname(std::string ln);//set这些定义了但是没有用到,因为我在PhoneBook::add()里是用构造函数来设置的:Contact c(input);
	void		setnickname(std::string nn);
	void		setnumber(std::string num);
	void		setsecret(std::string s);
	void		displayContact();
	void		displayMenu();
	Contact(std::string s[5]);
	Contact();
	~Contact();
};
#endif
