#include <stdio.h>
#include <time.h>

static long get_sys_runtime(int type)
{
	struct timespec times = {0, 0};
	long time;

	clock_gettime(CLOCK_MONOTONIC, &times);

	if (1 == type){
		time = times.tv_sec;
	}else{
		time = times.tv_sec * 1000 + times.tv_nsec / 1000000;
	}
	
    return time;
}

int main(int argc,char *argv[])
{
	long millisecond;
	millisecond = get_sys_runtime(2);
	printf("millisecond = %ld\n", millisecond);
	return 0;
}
