#include"stdio.h"
#include"shm_comm.h"
int main()
{
	int _size=4096;
	int shm_id=create_shm(_size);
	char* mem=(char*)attach(shm_id);
	while(1){
		printf("%s\n",mem);
		sleep(1);
	}
	detach(mem);
	destory_shm(shm_id);
	return 0;
}
