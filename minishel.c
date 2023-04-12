#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
int main(void)
{
	struct dirent *str;
	DIR *res;

	res = opendir(".");
	str = readdir(res);
	while (str)
	{
		if (str->d_name[0] != '.')
			printf("%s ", str->d_name);
		str = readdir(res);
	}
	closedir(res);
	return(0);
}