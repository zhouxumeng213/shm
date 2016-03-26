#include"stdio.h"
#include"shm_comm.h"
int main()
{
	int _size=4096;
	int shm_id=create_shm(_size);
	char* mem=(char*)attach(shm_id);
	int index=0;
	while(1)
	{
		mem[index++]='A';
		mem[index+1]='\0';
		index++;
		sleep(1);
	}
	detach(mem);
	return 0;
}
