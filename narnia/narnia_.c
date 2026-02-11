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
   // long val=0x41414141;
    int val2=72;
    char buf[20];
    
    printf("val2 addr size is: %d\n",sizeof(&val2));
    printf("val2 is currenly: %c\n",val2);
    printf("Here is your chance: ");
    scanf("%29s",&buf);

    printf("val2: %c\n",val2);
    printf("val2: %d\n",val2);
    return 0;
}

