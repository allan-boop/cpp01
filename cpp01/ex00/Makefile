SRCS = main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

NAME =BraiiiiiiinnnzzzZ

OBJS := $(SRCS:%.cpp=%.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXLAGS) $(OBJS) -o $@

(%.o): %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re