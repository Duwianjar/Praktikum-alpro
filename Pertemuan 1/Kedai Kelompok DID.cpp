#include<iostream>
#include<conio.h>

using namespace std;

int main (){ 

	FILE * pstruck;
    int kode,pri,jml1=0,jml2=0,dis=0,tot=0,tot1=0,tot2=0,byr,kbl;
    char mad;
   
   	do {
    	menu:
    	cout<<"============================================"<<endl;
    	cout<<"              Kedai Ayam Kota               "<<endl;
    	cout<<"============================================"<<endl;
    	cout<<"  Menu Makanan           Harga             |"<<endl;
    	cout<<"-------------------------------------------|"<<endl;
    	cout<<"1. AYAM GORENG          Rp. 17.000         |"<<endl;
    	cout<<"2. AYAM BAKAR           Rp. 21.000         |"<<endl;
    	cout<<"-------------------------------------------|"<<endl;
		cout<<"MASUKKAN PILIHAN ANDA        :";cin>>kode;
    	cout<<"--------------------------------------------"<<endl;
    	 
    	switch (kode){
    		case 1:  cout<<"Anda memesan AYAM GORENG  \t\t   |"<<endl;
        		pri=17000;
        		cout<<"Masukkan Jumlah Pesanan      : ";
        		cin>>jml1;
        		cout<<"--------------------------------------------"<<endl;
        		tot1=tot1+(pri*jml1);
        		cout<<"Total harga ayam goreng yaitu : Rp. "<<tot1<<endl;
	        	cout<<"============================================"<<endl;
        		cout<<"Masih ada Y/T :";
        		cin>>mad;
        break;
    		case 2:
        		cout<<"Anda Memesan AYAM BAKAR"<<endl;
        		pri=21000;
        		cout<<"Masukkan Jumlah Pesanan      :";
        		cin>>jml2;
        		cout<<"--------------------------------------------"<<endl;
        		tot2=tot2+(pri*jml2);
        		cout<<"Total harga ayam bakar yaitu : Rp. "<<tot2<<endl;
        		cout<<"============================================"<<endl;
        		cout<<"Masih ada Y/T :";
        		cin>>mad;
        
        		break;
        		default:
    			cout<<"Kode yang anda masukkan tidak ada";
   	 	}
    system ("cls");
    } 
    
    while (mad/='y'); 
        tot=tot1+tot2;
	
    	pstruck = fopen ("struck.txt","w");
    	fprintf (pstruck, "Daftar pesanan : \n");
   		fprintf (pstruck, "-------------------------------------------------\n");
    	fprintf (pstruck, "     Menu      |Harga 1an  | jumlah |   Harga   |\n");
    	fprintf (pstruck, "-------------------------------------------------\n");
    	fprintf (pstruck, "- AYAM GORENG   17.000     x   %d     : %d \n", jml1,tot1);
    	fprintf (pstruck, "- AYAM BAKAR    21.000     x   %d     : %d \n", jml2,tot2);
    	fprintf (pstruck, "-------------------------------------------------\n");
    	fprintf (pstruck, "Sub Total                            : %d \n", tot);
     	cout<<"====================="<<endl;
     	cout<<"Sub Total : Rp. "<<tot<<endl;
    	if(tot>=45000){
    					dis=tot*10/100;
    					tot=tot-dis;
    					}
    	fprintf (pstruck, "Diskon                               : %d \n",dis);
    	fprintf (pstruck, "Total                                : %d \n", tot);
    
    	cout<<"Diskon    : Rp. "<<dis<<endl;
   		cout<<"Total     : Rp. "<<tot<<endl;
   		cout<<"DIBAYAR   : Rp. ";
    	cin>>byr;
    	kbl=byr-tot;
    	fprintf (pstruck, "Di Bayar                             : %d \n", byr);
    	fprintf (pstruck, "Kembalian                            : %d \n", kbl);
    	fprintf (pstruck, "-----------------------------------------------\n");
    	fprintf (pstruck, "Terima Kasih Atas Kunjungan Anda di Kedai Ayam Kota x\n");
    	cout<<"---------------------"<<endl;
    	cout<<"KEMBALI   : Rp. "<<kbl<<endl;
    	cout<<"-----------------------------------------------------"<<endl;
    	cout<<"Terima Kasih Atas Kunjungan Anda di Kedai Ayam Kota x";
    	return 0;
    	getch();
		}

