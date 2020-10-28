/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018/09/30     Bernard      The first version
 */
#if 0
#include <rtthread.h>
#include <stdio.h>
#include <unistd.h>


int main(void)
{
    rt_kprintf("Hello, world\n");

    return 0;
}

#endif


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC_SIZE		1024*1024*200
#define INTERVAL_TIME	1


void thread_check(void*);
int check_byte(char*, char, int);
int flag_ok = 0;


int main(void)
{

	thread_check((void*)0);
/*	rt_thread_t check = RT_NULL;
	check = rt_thread_create("check", thread_check, RT_NULL, 2048*100, 21, 5);
	if (check != RT_NULL) 
	{
		rt_thread_control(check, RT_THREAD_CTRL_BIND_CPU, (void *)3);
		rt_thread_startup(check);
	}

	printf("begin sleep\n");
	while (!flag_ok)
	{
		rt_thread_mdelay(1000);
	}
	printf("end sleep\n");

*/	return 0;
}

int check_byte(char *buf, char byte, int size)
{
	int i = 0;
	int diff_num = 0;

	printf("%hhx, %hhx, %hhx\n", buf[0], buf[size-1], buf[size/2]);
	for (i = 0; i < size; i++)
	{
		if (buf[i] == byte)
		{
		}
		else
		{
			printf("%02x -> %02x\n", byte, buf[i]);
			diff_num++;
		}
	}
	return diff_num;
}

void thread_check(void *param)
{
	unsigned char *check_buf = NULL;
	unsigned char byte = 0;
	int ret = 0;

	check_buf = malloc(MALLOC_SIZE);
	if (NULL == check_buf)
	{
		printf("%s malloc %d byte fail\n", __FUNCTION__, MALLOC_SIZE);
		ret = -1;
		goto err;
	}
	memset(check_buf, 0, MALLOC_SIZE);

	while (byte < 0xFF)
	{
		memset(check_buf, byte, MALLOC_SIZE);
		sleep(INTERVAL_TIME);
		if ((ret = check_byte(check_buf, byte, MALLOC_SIZE)) != 0)
		{
			printf("check byte not pass\n");
			printf("right byte = %02x, diff times = %d\n", byte, ret);
			ret = -2;
			goto err;
		}
		printf("byte:%02x check pass\n", byte);
		byte++;
	}

	ret = 0;
	printf("thread check ok\n");
	goto exit;

err:
	printf("thread check err, ret = %d\n",ret);
exit:
	
	if (check_buf != NULL)
	{
		free(check_buf);
		check_buf = NULL;
	}
	flag_ok = 1;
	return ;
}

