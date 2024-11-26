#include<stdio.h>
 main(){
 	int soThuNhat,soThuHai,soThuBa,soThuTu,soThuNam,kq1,kq2,kq3,kq4,kq5,kq;
	 printf("nhap 5 so:");
	 scanf("%d,%d,%d,%d,%d",&soThuNhat,&soThuHai,&soThuBa,&soThuTu,&soThuNam);
	 if(soThuNhat%2==0){
	 	kq1=0;	 	
	 }else{
	 	kq1=soThuNhat;
	 }
	 if(soThuHai%2==0){
	 	kq2=0;	 	
	 }else{
	 	kq2=soThuHai;
		 }
	 if(soThuBa%2==0){
	 	kq3=0;	 	
	 }else{
	 	kq3=soThuBa;
		 }
	 if(soThuTu%2==0){
	 	kq4=0;	 	
	 }else{
	 	kq4=soThuTu;
	 }
	 if(soThuNam%2==0){
	 	kq5=0;	 	
	 }else{
	 	kq5=soThuNam;
	 }
	 kq=kq1+kq2+kq3+kq4+kq5;
	 printf("%d",kq);
	 
	 
 }