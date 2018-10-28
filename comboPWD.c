#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nextCombo(char *p, int i);

int findPWD() {
	char pwd[10] = "c$m7";

	char cur[10]={0};
	char *curP = cur;

	int i=0;
	for(int z=1; z<(int)sizeof(cur); z++){
		
		while(nextCombo(curP, z)==0){
			//printf("cur = %s\n", cur);
			if(strcmp(pwd, cur)==0){
				printf("pwd found : %s\n", cur);
				return 0;
			}
		}

	}
    return 0;
}

int nextCombo(char *p, int xx){
	int yy=0;
	while(yy<xx){
		if(p[yy]==126 && yy==xx){
			return -1;
		}		
		if(p[yy]==126 && yy+1<=xx){
			if(p[yy+1]==0){
				p[yy]=33;
				p[yy+1]=33;
				return 0;
			}
			if(p[yy+1]>=33 && p[yy+1]<126){
				p[yy]=33;
				p[yy+1]++;
				return 0;
			}
			p[yy]=33;
			yy++;
		}	
		if(p[yy]==0){
			p[yy]=33;
			return 0;
		}	
		if(p[yy]<126){
			p[yy]++;
			return 0;
		}
	}
	return -1;
}
