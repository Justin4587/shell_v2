all: free_grid.c _str_stuff.c buf_splitter.c env_path.c free_grid.c shell_v2_tryhard.c shell_v2.h
	gcc -Wall -Werror -Wextra -pedantic *.c shell_v2.h -o hsh
