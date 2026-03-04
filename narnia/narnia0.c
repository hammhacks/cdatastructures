/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
   */
#include <stdio.h>
#include <stdlib.h>

int main(){
    long val=0x41414141;
    //printf("size of long: %d\n",sizeof(val));
    char buf[20];

    printf("Correct val's value from 0x41414141 -> 0xdeadbeef!\n");
    printf("Here is your chance: ");
    scanf("%40s",&buf);

    printf("buf: %s\n",buf);

    if(val==0xdeadbeef){
        //setreuid(geteuid(),geteuid());
        //system("/bin/sh");
	printf("yay, got it!\n");
    }
    else {
        printf("WAY OFF!!!!\n");
	    int i;
    	    for(i=0;i<26;i++)
            printf("buf[%d] addr: %p : val: %d\n",i,&buf[i],buf[i]);

            printf("The addr of long val is: %p\n",&val);


        exit(1);
    }

    int i;
    for(i=0;i<40;i++)
	printf("buf[%d] addr: %p : val: %x\n",i,&buf[i],buf[i]);

    printf("The addr of long val is: %p\n",&val);

    return 0;
}

