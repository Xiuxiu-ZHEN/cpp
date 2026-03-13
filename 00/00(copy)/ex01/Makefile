NAME=phonebook
SRCS=Contact.cpp PhoneBook.cpp main.cpp
CPP=c++
FLAGS=-std=c++98 -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(SRCS)
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)
clean:
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re



🧱单步编译（one-step build）：
	它直接把 .cpp 文件编译并链接成可执行文件，不会中间生成 .o 文件。
	所以执行完后目录里只有可执行文件，没有 .o。
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)是单步编译,
		让编译器 一次性 完成了两件事：
		1️⃣ 把所有 .cpp 源文件编译成机器码；
		2️⃣ 立刻把它们**链接（link）**成可执行文件。
		它没有产生任何中间的 .o 文件。
		编译完目录里只会留下：phonebook （可执行文件）

🧱分步编译:
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

1.每个 .cpp 文件先编译成 .o（目标文件）；
2.所有 .o 文件再链接成一个可执行文件；
3.make clean 就能删除 .o 文件。

🧱技巧和结论!!!
有 OBJS（目标文件 .o 列表） → 就是分步编译。

