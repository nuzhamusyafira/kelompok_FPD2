#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{



	if(argc<2)
	{
		printf(2,"Need 2 Arguments\n");
		exit();
	}
	
	else
	{
		unlink(argv[1]);
		exit();
	}


} 
