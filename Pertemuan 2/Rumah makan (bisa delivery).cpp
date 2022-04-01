#include<iostream>
#include<conio.h>
using namespace std;

int main (){ 

	FILE * pstruck;
    int kode,pri,jml1=0,jml2=0,jml3=0,jml4=0,jml5=0,dis=0,tot=0,tot1=0,tot2=0,tot3=0,tot4=0,tot5=0,byr,kbl,ongkir=0,totongkir=0,disong=0,pothar=00,perpothar;
    float jarak;
    char mad;
   
   	do {
    	menu:
    	cout<<"============================================"<<endl;
    	cout<<"                RUMAH MAKAN                |"<<endl;
    	cout<<"              (Bisa Delivery)              |"<<endl;
    	cout<<"============================================"<<endl;
    	cout<<"    Menu Makanan               Harga       |"<<endl;
    	cout<<"-------------------------------------------|"<<endl;
    	cout<<"1. NASI BAKAR AYAM          Rp. 18.000     |"<<endl;
    	cout<<"2. NASI BAKAR TONGKOL       Rp. 20.000     |"<<endl;
    	cout<<"3. NASI BAKAR MIX           Rp. 25.000     |"<<endl;
    	cout<<"4. NASI BAKAR CUMI          Rp. 30.000     |"<<endl;
    	cout<<"5. NASI BAKAR BAKAR         Rp. 25.000     |"<<endl;
    	cout<<"-------------------------------------------|"<<endl;
		cout<<"\nMASUKKAN PILIHAN ANDA        :";   
		cin>>kode;
    	cout<<"-------------------------------------------"<<endl;
    	 
    	switch (kode){
    		case 1:  cout<<"ANDA MEMESAN NASI BAKAR AYAM   \t\t   |"<<endl;
        		pri=18000;
        		cout<<"Masukkan Jumlah Pesanan      : ";
        		cin>>jml1;
        		cout<<"--------------------------------------------"<<endl;
        		tot1=tot1+(pri*jml1);
        		cout<<"Total harga nasi bakar ayam yaitu : Rp."<<tot1<<endl;
	        	cout<<"============================================"<<endl;
        		cout<<"Masih ada Y/T :";
        		cin>>mad;
        		break;
    		case 2:
        		cout<<"ANDA MEMESAN NASI BAKAR TONGKOL"<<endl;
        		pri=20000;
        		cout<<"Masukkan Jumlah Pesanan      :";
        		cin>>jml2;
        		cout<<"--------------------------------------------"<<endl;
        		tot2=tot2+(pri*jml2);
        		cout<<"Total harga nasi bakar tongkol yaitu : Rp."<<tot2<<endl;
        		cout<<"============================================"<<endl;
        		cout<<"Masih ada Y/T :";
        		cin>>mad;
        
        		break;
        	case 3:
        		cout<<"ANDA MEMESAN NASI BAKAR mix"<<endl;
        		pri=25000;
        		cout<<"Masukkan Jumlah Pesanan      :";
        		cin>>jml3;
        		cout<<"--------------------------------------------"<<endl;
        		tot3=tot3+(pri*jml3);
        		cout<<"Total harga nasi bakar mix yaitu : Rp."<<tot3<<endl;
        		cout<<"============================================"<<endl;
        		cout<<"Masih ada Y/T :";
        		cin>>mad;
        
        		break;
        	case 4:
        		cout<<"ANDA MEMESAN NASI BAKAR CUMI "<<endl;
        		pri=30000;
        		cout<<"Masukkan Jumlah Pesanan      :";
        		cin>>jml4;
        		cout<<"--------------------------------------------"<<endl;
        		tot4=tot4+(pri*jml4);
        		cout<<"Total harga nasi bakar cumi yaitu : Rp."<<tot4<<endl;
        		cout<<"============================================"<<endl;
        		cout<<"Masih ada Y/T :";
        		cin>>mad;
        
        		break;
        	case 5:
        		cout<<"ANDA MEMESAN NASI GORENG BAKAR "<<endl;
        		pri=25000;
        		cout<<"Masukkan Jumlah Pesanan      :";
        		cin>>jml5;
        		cout<<"--------------------------------------------"<<endl;
        		tot5=tot5+(pri*jml5);
        		cout<<"Total harga nasi bakar tongkol yaitu : Rp."<<tot5<<endl;
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
        tot=tot1+tot2+tot3+tot4+tot5;
	
    	pstruck = fopen ("struck.txt","w");
    	fprintf (pstruck, "Daftar pesanan : \n");
   		fprintf (pstruck, "---------------------------------------------------------\n");
    	fprintf (pstruck, "     Menu           |Harga 1an   | jumlah   |   Harga   |\n");
    	fprintf (pstruck, "---------------------------------------------------------\n");
    	fprintf (pstruck, "- NASI BAKAR AYAM     18.000     x   %d     : %d \n", jml1,tot1);
    	fprintf (pstruck, "- NASI BAKAR TONGKOL  20.000     x   %d     : %d \n", jml2,tot2);
    	fprintf (pstruck, "- NASI BAKAR MIX      25.000     x   %d     : %d \n", jml3,tot3);
    	fprintf (pstruck, "- NASI BAKAR CUMI     30.000     x   %d     : %d \n", jml4,tot4);
    	fprintf (pstruck, "- NASI GORENG BAKAR   25.000     x   %d     : %d \n", jml5,tot5);
    	fprintf (pstruck, "---------------------------------------------------------\n");
    	fprintf (pstruck, "Sub Total                                  : %d \n", tot);
    	cout<<"Berapa jarak rumah anda(dalam KM) :  ";
    	cin>>jarak;
     	cout<<"==============================="<<endl;
     	cout<<"Sub Total                  : Rp. "<<tot<<endl;								
		if(jarak>4){
						ongkir=ongkir+20000;
    					}
    	else if(jarak<=4){
    					ongkir=ongkir+8000;
						}
		if(tot>40000&&tot<=100000){ disong=disong+4000;
						}
    	else if(tot>100000&&tot<=150000){
    					disong=disong+9000;
						pothar=pothar+(tot*0.25);
						perpothar=25;
						}
		else if(tot>150000){
						disong=disong+12000;
						pothar=pothar+(tot*0.35);
						perpothar=35;
						}
		tot=tot-pothar;	
		fprintf (pstruck, "Potongan Harga                %d %          : %d \n", perpothar,pothar);
    	fprintf (pstruck, "---------------------------------------------------------\n");
		fprintf (pstruck, "Total harga sebelum Ongkir                 : %d \n", tot);	
		cout<<"Potongan harga "<<perpothar<<"%         : Rp. "<<pothar<<endl;
		cout<<"--------------------------------------(-)"<<endl;
		cout<<"Total harga sebelum ongkir : Rp. "<<tot<<endl;
		cout<<"--------------------------------------"<<endl;		
		tot=tot+ongkir-disong;
		totongkir=ongkir-disong;
		fprintf (pstruck, "Ongkir                                     : %d \n", ongkir);
    	fprintf (pstruck, "Diskon Ongkir                              : %d \n", disong);
    	fprintf (pstruck, "---------------------------------------------------------\n");
    	fprintf (pstruck, "Total Ongkir                               : %d \n", totongkir);   	
    	fprintf (pstruck, "Total                                      : %d \n", tot);
    

    	cout<<"Ongkir                     : Rp. "<<ongkir<<endl;
    	cout<<"Diskon Ongkir              : Rp. "<<disong<<endl;
    	cout<<"--------------------------------------(-)"<<endl;
    	cout<<"Total Ongkir               : Rp. "<<totongkir<<endl;
    	cout<<"--------------------------------------(+)"<<endl;
   		cout<<"Total                      : Rp. "<<tot<<endl;
   		cout<<"DIBAYAR                    : Rp. ";
    	cin>>byr;
    	cout<<"--------------------------------------(-)"<<endl;
    	kbl=byr-tot;
    	fprintf (pstruck, "Di Bayar                                   : %d \n", byr);
    	fprintf (pstruck, "Kembalian                                  : %d \n", kbl);
    	fprintf (pstruck, "-----------------------------------------------\n");
    	fprintf (pstruck, "Terima Kasih Atas Kunjungan Anda di RUMAH MAKAN (Bisa Delivery)\n");
    	cout<<"KEMBALI                    : Rp. "<<kbl<<endl;
    	cout<<"-----------------------------------------------------"<<endl;
    	cout<<"Terima Kasih Atas Kunjungan Anda di RUMAH MAKAN (Bisa Delivery)";
    	return 0;
    	getch();
		}

