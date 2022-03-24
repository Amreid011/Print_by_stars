#include<bits/stdc++.h>
#include<iostream>    
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
//by : Amr Eid


int main (){
    int choose,m,n,k,i,hundreds=0,tens=0,ones=0,numper;
    while(1){
        printf("plz enter numpers from 1 to 2 : \n");
        scanf("%d",&choose);
        if(choose==1){
            printf("plz enter m numper : \n");
            scanf("%d",&m);
            printf("plz enter n numper : \n");
            scanf("%d",&n);
            printf("plz enter k numper : \n");
            scanf("%d",&k);
            for(i=m;i<=n;i++){
                if(i%k==0){
                    printf("%d \t\n",i);
                }
            }
        }
        else if (choose==2){
            printf("enter a numper between 1-999 (enter 0 to exit) : \n");
            scanf("%d",&numper);
            if (numper==0)
                break;
            hundreds = numper/100;
            tens =(numper-(hundreds*100))/10;
            ones = numper-(hundreds*100)-(tens*10);
            if(hundreds>0){
                if(hundreds==9)
                    printf("Nine");
                else if(hundreds==8)
                    printf("Eight");
                else if(hundreds==7)
                    printf("Seven");
                else if(hundreds==6)
                    printf("Six");
                else if(hundreds==5)
                    printf("Five");
                else if(hundreds==4)
                    printf("Four");
                else if(hundreds==3)
                    printf("Three");
                else if(hundreds==2)
                    printf("Two");
                else
                    printf("One");
                printf(" Hundred ");
            }
            if(tens!=1){
                if (tens==9)
                    printf("Ninety ");
                else if (tens==8)
                    printf("Eighty ");
                else if (tens==7)
                    printf("Seventy ");
                else if (tens==6)
                    printf("Sixty ");
                else if (tens==5)
                    printf("Fifty ");
                else if (tens==4)
                    printf("Forty ");
                else if (tens==3)
                    printf("Thirty ");
                else if (tens==2)
                    printf("Twenty ");

                if (ones>0){
                    if(ones==9)
                        printf("Nine\n");
                    else if(ones==8)
                        printf("Eight\n");
                    else if(ones==7)
                        printf("Seven\n");
                    else if(ones==6)
                        printf("Six\n");
                    else if(ones==5)
                        printf("Five\n");
                    else if(ones==4)
                        printf("Four\n");
                    else if(ones==3)
                        printf("Three\n");
                    else if(ones==2)
                        printf("Two\n");
                    else
                        printf("One\n");
                }
                else{
                    printf("\n");
                }
            }
            else{
                    if(ones>0){
                if(ones==9)
                    printf("Nineteen\n");
                else if(ones==8)
                    printf("Eightteen\n");
                else if(ones==7)
                    printf("Seventeen\n");
                else if(ones==6)
                    printf("Sixteen\n");
                else if(ones==5)
                    printf("Fiveteen\n");
                else if(ones==4)
                    printf("Fourteen\n");
                else if(ones==3)
                    printf("Thirten\n");
                else if(ones==2)
                    printf("twelve\n");
                else
                    printf("Eleven\n");
            }
           else{
                printf("ten\n");
               }
            }
        }
        else {
            printf("thank you for use my program \n\t By Amr Eid ");
            exit(0);
        }
    }
    return 0;
}
