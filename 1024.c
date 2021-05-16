#include<stdio.h>
#include<string.h>
int main(){
    int t,i,j;
    char str[1001],str1[1000];
    scanf("%d",&t);
    getchar();
    
    while(t--){
        
            gets(str);
            int l=strlen(str);
            for(i=0;i<l;i++){
                if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
                    str[i]+=3;
                }
            }
                int count=0;
                for(j=l-1;j>=0;j--){
                    str1[count]=str[j];
                    count++;
                }
                str1[count]='\0';
                int temp=l/2;
                for(i=temp;i<l;i++){
                    str1[i]=str1[i]-1;
                }
                 printf("%s\n",str1);
                
            }
           

        }

    
