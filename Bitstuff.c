Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@SAMEERAHMEDS 
Navachethan-Murugeppa
/
1NT18IS099_navachethan_C_npLab
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
1NT18IS099_navachethan_C_npLab/part-A/frame_bits/bit_stuffind and destuffing/bit.c
@Navachethan-Murugeppa
Navachethan-Murugeppa np_lab
Latest commit c7d83a7 5 hours ago
 History
 1 contributor
52 lines (51 sloc)  1.2 KB
  
// program for bit stuffing and de-stuffing.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i=0, count = 0;
	int k,choice;
	char data[20];
	while(1){
		printf("\nEnter your choice:1.bit-stuff\t2.bit-destuff\t3.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter Data Bits: ");
 					 scanf("%s",data);
 
 					 for(i=0; i<strlen(data); i++)
                      {
                        if(data[i]=='1')
                         count++;
                        else
                           count=0;
                          printf("%c",data[i]);
                           if(count==5)
					      { 
					        printf("0");
					        count=0;
					      }
					   }
							break;
							printf("bit-stuff:");
			case 2: printf("enter data");
			        scanf("%s",data);
					count = 0;
					for(i=0;i<strlen(data);i++){
						if(data[i] == '1'){
							count++;
						}
						else { count = 0; }
						if (count == 5){
							i+=1;
							for(k=i;k<strlen(data);k++){
								data[k] = data[k+1]; }
								data[k] = '\0';
								i-=1;
						}
					}				
                     printf("data-unstuffed: %s",data);
                     break;
			case 3: exit(0);
		}
	}
}
