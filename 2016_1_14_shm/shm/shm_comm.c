#include"shm_comm.h"
int comm_shm()
{}
int create_shm(int _size,int flag)
{
	key_t _key=ftok(_PATH_,_PROG_ID_);
}
int get_shm()
{}
int destory_shm(int shm_ida)
{
	if(shmctl(shm_id,IPC_RMID,NULL)<0)
	{
		perror("shmctl");
		return -1;
	}
}
void* attach(int shm_id)
{
	void* mem=NULL;
	if(mem=shmat(shm_id,NULL,0)>0){
		return mem;
	}

	return NULL;
}
int detach(void* addr)
{
	return shmdt(addr);
}
