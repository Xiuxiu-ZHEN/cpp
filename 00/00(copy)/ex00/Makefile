
/*
Makefile 是给 make 工具看的一个“自动编译脚本”。
👉 它能让你不用每次手动打长命令，比如：
c++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp -o megaphone

虽然看起来像一堆奇怪的符号，但其实它的逻辑非常简单：
👉 告诉电脑：怎么从源代码 .cpp 生成可执行文件。
*/

NAME=megaphone
CPP=c++
FLAGS=-Wall -Wextra -Werror -std=c++98

/*
“要生成文件 megaphone，
需要用 megaphone.cpp 作为源文件，
编译命令是：$(CPP) $(FLAGS) megaphone.cpp -o $(NAME)。”
*/

all: $(NAME)
$(NAME): megaphone.cpp
	$(CPP) $(FLAGS) megaphone.cpp -o $(NAME)


/*这个空的目标暂时没内容。
一般在大型项目里这里会写删除 .o（目标文件）的命令，比如:
clean:
	rm -f *.o
但因为这个项目只有一个 .cpp，不需要生成 .o 文件，所以是空的。*/

clean:
fclean: clean
	rm -f $(NAME)
re: fclean all   //“先执行 fclean（删除旧文件），然后执行 all（重新编译）。”
.PHONY: all clean fclean re //告诉 make：这些名字（all, clean, fclean, re）不是文件名，而是命令目标。
