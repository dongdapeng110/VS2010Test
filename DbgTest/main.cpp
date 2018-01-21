#include <windows.h>

struct ST
{
	int i;
	int j;
	int k[10];
};

enum EM
{
	EM_1,
	EM_2,
	EM_3
};

union UN
{
	int iii;
	double ddd;
	struct stt
	{
		int i;
		int j;
	}u_st;
};

typedef int IINT;

int main(void)
{
	int i = 0;
	double d = 0;
	struct ST st_t = { 1, 2, 3 };
	enum EM em_t = EM_2;
	union UN un_t = { 0 };
	IINT iint = 0;

	i = 100;
	i++;
	i++;

	while(1)
	{
		i++;
		d = d + 0.7;
		Sleep(1000);
	}

	/* Nothing 222 333 */

	return 0;
}