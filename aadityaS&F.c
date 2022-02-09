#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int scalc(int r,int s,int t);
int fcalc(int l,int m,int n);
void gotoxy(int x,int y)
{
	
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{

	system("color F4");
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	float wsr=77.5,gramsr=19,peasr=25,mustsr=5,lsr=2.5,pulsr=17.5,rsr=77,gsr=200,csr=24.5,msr=22.5,bsr=4.5,ssr=65;
    float pricenpk=27;
	char name[50];
	for(i=1;i<=80;i++)
	{
	printf("_");
	}
	gotoxy(1,4);
	for(i=1;i<=80;i++)
	{
	printf("_");}
	gotoxy(1,3);
	printf("\t\t\t  THE SEEDS AND FERTILIZER CALC");
	printf("\n\n\nEnter your first NAME : ");
	scanf("%s",&name);
	printf("\n\t\t\t***Hello  %s***\n",name);
	printf("\nPlease Enter The Area of Your Field (in Hectare): ");
	scanf("%d",&f);
	start:
	printf("\n");

		for(i=1;i<=80;i++)
	{
	printf("_");
	}
	printf("\n\n\t\t\t\t    Main Menu");

	
	printf("\n");
	for(p=1;p<=80;p++)
	{printf("_");
	}
	printf("\n\t\t\t\t1. Find Your Crop\n\t\t\t\t2. Seeds Calculations\n\t\t\t\t3. Fertilizer Calculations\n\t\t\t\t4. Help ");
	start100:
	printf("\n\n\t\t\t\tEnter your choice : ");
	scanf("%d",&y);
	switch(y)
	{
		case 1:
		{
				start1:
	     printf("\nSeason of Cropn\n\n1.Rabi\n\n2.Kharif\n\n3.back\n\nEnter your choice :  ");
	     start99:
		 scanf("%d",&z);
		    switch(z)
		    {
			case 1:
				start2:
				printf("1. Wheat\n2. Gram\n3. Pea\n4. Mustard()\n5. Linseed\n6. Pulses\n7.Back\nEnter your choice : ");
				start98:
				scanf("%d",&a);
					switch(a)
					    {
						case 1 :
							printf("\nDuration : 60-150 Days \n Required seeds : 75-80 Kg /hactare\n Yield : 2575kg / hactare\n Variety of Seeds : VL-832, VL-804, HS-365, HS-240, HS-2687, WH-147, WH-542, PBW-343, WH-896, UP-2338\n0. Back ");
							start97:
							scanf("%d",&q);
							if (q==0)
							{
								goto start2;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
							goto start97;
							}
							break;
						case 2:
							printf("\nDuration : 135-140 Days\n Required seeds : 18-20 Kg/hactare  \nYield : 450Kg/hactare\n Variety of Seeds : BG-722, BG-20. BG-623, BG-26, BG-207, U-31, BG-787\n0. Back");
								start96:
								scanf("%d",&q);
							if (q==0)
							{
								goto start2;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start96;
							}
									break;
						case 3:
						    printf("\nDuration : 105-121 Days\n Required seeds : 20-30 Kg/hactare\n Yield : 30-40Quintal/hactare\n Variety of Seeds : PG-3, PUNJAB8. MATAR AGETA 6, FIELD PEA,SNOW PEA, SUGAR SNAP PEA\n0. Back\n0. Back\n");
						    	
								start95:
								scanf("%d",&q);
							if (q==0)
							{
								goto start2;
								
							}
							else{
						 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start95;
								}
									
									break;
						case 4:
						    printf("\nDuration : 80-85 Days\n Required Seeds: 4-6 Kg/hactare\nYield :1700kg/hactare\n Variety of Seeds : yellow musterd, black musterd\n0. back\n");
							start94:
							scanf("%d",&q);
							if (q==0)
							{
								goto start2;
									
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start94;
								}
									break;
						case 5:
							printf("\nDuration : 120-140 Days\nRequired Seeds :2-3 Kg/hactare\nYield 40-60 kg/hactare: \nVariety of seeds : peninsular,alluvial and more\n0. Back\n");
							start93:
							scanf("%d",&q);
							if (q==0)
							{
								goto start2;
								
							}
							else{
						 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start93;}
									break;
						case 6:
						    printf("\nDuration : 25-40 Days\nRequired Seeds : 15-20 Kg/hactare\nYield : 800 kg/hactare\nVariety of seeds : CO-3, CO-4\n0. Back\n");
							start92:
							scanf("%d",&q);
							if (q==0)
							{
								goto start2;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start92;}
									break;
						case 7:
							goto start1;
								break;
						default:
							
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
							goto start98;
							break;
						    }
					    break;

				case 2:
					start3:
					printf("1. Rice()\n2. Groundnut()\n3. Cotton\n4. Maiz\n5. Bajara\n6. Soyabean\n7. Back\nEnter your choice : ");
					start91:
					scanf("%d",&b);
					switch(b)
					    {
					    case 1 :
						printf("\nDuration : 90-110 Days\nRequired Seeds : 74-80 Kg/hactare\nYield :60-65 Qunital/hactare\nVariety of seeds : Kalanamak, Parmal, Basmati, pusa\n\n0. Back\n");
							start90:
							scanf("%d",&q);
							if (q==0)
							{
								goto start3;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start90;}
								break;
					    case 2:
						printf("\nDuration : 110-120 Days\nRequired Seeds : 2 Quintal/hactare\nYield : 50 Quital/hactare\nVariety of seeds : N/A\n\n0. Back\n ");
							start89:
							scanf("%d",&q);
							if (q==0)
							{
								goto start3;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start89;}break;
					    case 3:
						printf("\nDuration : 135-140 Days\nRequired Seeds : 24-25 Kg/hactare\nYield : 1000-1200 kg/hactare\nVariety of seeds : GOSSYPIUM HIRSTUM, GOSSYPIUM BARODENSE, GOSSYPIUM ARBOREUM, GOSSYPIUM HERBACEUM\n\n0. Back\n");
							start88:scanf("%d",&q);
							if (q==0)
							{
								goto start3;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start88;}
								break;
						case  4:
						printf("\nDuration : 95-110 Days\nRequired Seeds : 20-25  Kg/hactare\nYield : 25-35 Quintal/hactare\nVariety of seeds : DHAM-103, DHAM-105, DHAM-1, TRISULATHA\n\n0. Back\n");
						start87:
							scanf("%d",&q);
							if (q==0)
							{
								goto start3;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start87;}break;
						case 5:
						printf("\nDuration : 70-90 Days\nRequired Seeds : 4-5 Kg/hactare\nYield : 28--35 Quintal/hactare: \nVariety of seeds : ICMB-155, WCC-75, ICTP-8203, RAJ-171, NDFB-3, DHANSHAKTI\n\n0. Back\n");
						start86:
							scanf("%d",&q);
							if (q==0)
							{
								goto start3;
								
							}
							else{
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start86;}break;
					    case 6:
						printf("\nDuration :90-100 Days\nRequired Seeds : 60-70 Kg/hactare\nYield : 1600-1900 kg/hactare: \nVariety of seeds : CO-1, CO-2\n\n0. Back\n");
						start85:
							scanf("%d",&q);
							if (q==0)
							{
								goto start3;
								
							}
							else{
						 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								goto start85;}break;
						case 7:
							goto start1;
							break;
						default	:
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
							 goto start91;
							break;
					       }
			              break;
                case 3:
                	goto start;
                	break;
				 default:
				    
					 printf("\nInvalid Input :\nPlease choose carefully>>>>  ");  
					 goto start99;
				    break;
					
					}
			}break;


	case 2:
	            start4:
				 printf("\nPlease choose the seeds of your crop : \n");
	    	            	printf("\n");for(i=1;i<=80;i++){printf("_");}
	    printf("\n1. Wheat(Gehu)\t4. Mustard()\t7. Rice()\t10. Maiz\n2. Gram()\t5. Linseed\t8. Groundnut()\t11. Bajara\n3. Pea()\t6. Pulses\t9. Cotton\t12. Soyabean\n13. Back\n\n");
	                          printf("\n");for(i=1;i<=80;i++){printf("_");}
	                     printf("\nEnter your choice : ");
						 printf("\n");for(i=1;i<=80;i++){printf("_");}     
	            start84:
				scanf("%d",&c);
                switch(c)
			        {
		 case 1 :
			    		
			    		printf("\nchoose the variety of seeds\n1. VL-832\t4. HS-240\t7. WH-542\t10. UP-2338\n2. VL-804\t5. HS-2687\t8. PBW-343\n3. HS-365\t6. WH-147\t9. WH-896\n\n 11. Back\n\nEnter our choice :  ");
			            
						start80:
						scanf("%d",&e);
			            
			            switch(e)
			            { 
						case 1:
			            	{
			            	int wrsvl;
			            	wrsvl=30;
			            	scalc(f,wsr,wrsvl);
							}
					        
							
			            case 2:
				         	{
							int wrsvla=32;
					        scalc(f,wsr,wrsvla);
							}
							break;
				      case 3:
				  
				            {
							int wrshs=33;
				          	scalc(f,wsr,wrshs);
							}
							break;
				      case 4:
					        {
					         int wrshsa=37;
							scalc(f,wsr,wrshsa);
							}
							 break;
				      case 5:
				            {
				             int wrshsaa=31;
					        scalc(f,wsr,wrshsaa);
			             	}
							 break;
				      case 6:
					        {
							  int wrswh=30;
								scalc(f,wsr,wrswh);
							 }
							 break;
				      case 7:
					         {
							 int wrswha=29;
								scalc(f,wsr,wrswha);
							 }break;
				      case 8:
					           {
							   int wrspbw=31;
							 	scalc(f,wsr,wrspbw);
							
							} break;
				      case 9:
					        {
							  int wrswhb=24;
							 	scalc(f,wsr,wrswhb);
							 
							 }break;
				      case 10:
					         {
							 int wrsup=27;
					        	scalc(f,wsr,wrsup);
						    }
							 break;
					case 11:
					{
						goto start4;
						break;
							 }		 
				      default:
				       printf("Invalid Input :\nPlease choose carefully>>>>  ");  
					    goto start80;
					    
					 
					 break;
						}
		    break;
		case 2:
					printf("\nchoose the variety of seeds\n1. BG-722\t4. BG-26\t7. Back\n2. BG-734\t5. BG-207\n3. BG-623\t6. U-31\n\n\nEnter our choice :  ");
					start79:
					scanf("%d",&g);
			    		switch(g)
			            {
			              case  1:
			            	{
							int grambga=60;
			            	scalc(f,gramsr,grambga);
			            }
			            	 break;
			              case 2:
			            	 {
							 
			            	 int grambgb=65;
							scalc(f,gramsr,grambgb);
							 }break;
			              case 3:
			            	 {
							 int grambgc=70;
							scalc(f,gramsr,grambgc);
							 
							 }break;
			              case 4:
			            	 {
							 int grambgd=75;
							 scalc(f,gramsr,grambgd);
							 }break;
			              case 5:
			            	{
							 int grambge=80;
							 scalc(f,gramsr,grambge);
							 }break;
			              case 6:
			            	 {
							 int gramu=85;
							 scalc(f,gramsr,gramu);
							 }break;
					 case 7:
					 	     goto start4;
					 	    break;
				
				      default:
				             printf("Invalid Input :\nPlease choose carefully>>>>  ");  
					            goto start79;
				
					           break;
				            	}
						
						break;
		case 3:
			    	    printf("\nchoose the variety of seeds\n1. PG-3\t\t\t4.PUNJAB8\n2. MATAR AGETA \t\t\t5. FIELD PEA\n3. SNOW PEA\t\t\t6. SUGAR SNAP PEA\n7. Back\nEnter our choice :  ");
				    start78:
					scanf("%d",&h);
				    switch(h)
			            { case 1:
			            	{
							int peapg=30;
			            	scalc(f,peasr,peapg);
			            }
			            	 break;
			              case 2:
			            	{
							
			            	 int peama=32;
			            	 scalc(f,peasr,peama);
						}
							 break;
			              case 3:
			            	{
							  int peasp=33;
							 scalc(f,peasr,peasp);
							 }break;
			              case 4:
			            	 {
							 int peap=37;
							 scalc(f,peasr,peap);
							 }break;
			              case 5:
			            	{
							  int peafp=31;
							 scalc(f,peasr,peafp);
							 }break;
			              case 6:
			            	 {
							 int peass=30;
							 scalc(f,peasr,peass);
							 }break;
						case 7:
						   goto start4;
						   break;
						default:
							 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
							 goto start78;
							 break;
						  	 
			            	
						}
						break;
		 case 4:
					    printf("\nchoose the variety of seeds\n1. Yellow mustered \n2. Black musterd\n3. Back\n\nEnter our choice : ");
				    	start77:
						scanf("%d",&j);
						switch(j)
			            {
			            case 1:
			            	{
							int yellow=30;
			            	scalc(f,mustsr,yellow);
			            	
			            	} break;
			            case 2:
			            	 
			            	{
							 int black=32;
					    	scalc(f,mustsr,black);
					    	}
						break;
						case 3:
							goto start4;
							break;
						default:
						 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
						 goto start77;
						 break;	
						
				     	}
			case 5:
					    printf("\nchoose the variety of seeds\n1. peninsular\n2. alluvial\n3. Back\n\nEnter our choice : ");
					start76:
					scanf("%d",&k);
			    		switch(k)
			            {case 1:
			            	{
							int penp=30;
			            	scalc(f,lsr,penp);
			            	
			            	 }break;
			              case 2:
			            	 
			            	{
							 int allp=32;
							scalc(f,mustsr,allp);
							}break;
			            	case 3:
			            	goto start4;
			            	break;
			            	default:
			            	 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
							goto start76;break;
						}
						break;
			case 6:
					printf("\nchoose the variety of seeds\n1. CO-3\n2.  CO-4\n3. Back\n\nEnter our choice :  ");
			     		start75:
						 scanf("%d",&l);
						 switch(l)
			            {
			            case 1:
			            {
								int coap=30;
			            	scalc(f,pulsr,coap);
			        }
			            	 break;
			              case 2:
			            	 {
							 
			            	 int cobp=32;
							 scalc(f,pulsr,cobp);
						}
							
							case 3:
							goto start4;
							 break;
							 default:
							 	
								  printf("Invalid Input :\nPlease choose carefully>>>>  ");  
								  goto start75;
							 		break;
							 	
						}
						 break;
			case 7 :
			    		printf("\nchoose the variety of seeds\n1. Kalanamal\n2. Parmal\n3. Basmati\n4. pusa\n5. Back\n\nEnter our choice : ");
					start74:
					scanf("%d",&m);
			     		switch(m)
			            {
			            case 1:
			            {
								int rknp=30;
			            	scalc(f,rsr,rknp);
			            	
			            	 }break;
			              case 2:
			            	 {
							 
			            	 int rpp=32;
							 
							 scalc(f,rsr,rpp);
							
							 }break;
						case 3:
			            {
								int rbp=30;
			            	 scalc(f,rsr,rbp);
						
			            	 }break;
			            case 4:
			            	
			            	{
							 int rpup=32;
			            	 scalc(f,rsr,rpup);
							 
							 }break;
						case 5:
							 goto start4;
							 break;
						default:
							 	 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
							 	 goto start74;
							 	 break;
							 	 	
						}
						 break;
			case 8:
			    		printf("\nSeeds requirment for %d is %d Kg\n cost : %d\n 1. Back\n\n Enter your choice : ");
			    		start73:
						scanf("%d",&u);
			    		 switch(u)
			    		 {
			    		 	case 1:
			    		 		goto start4;
			    		 		break;
			    		 	default:
							    printf("Invalid Input :\nPlease choose carefully>>>>  ");  
							   goto start73;
							   break;	
			    		 	
						 }
			    		
			    		break;
			case 9:
			    	    printf("\nchoose the variety of seeds\n1. GOSSYPIUM HIRSTUM\n2. GOSSYPIUM BARODENSE\n3. GOSSYPIUM ARBOREUM\n4. GOSSYPIUM HERBACEUM\n5. Back \n\nEnter our choice : ");
			    	    start72:
						scanf("%d",&n);
						switch(n)
			            {
			             case 1:
			                {
									int cghpa=30;
			            	scalc(f,csr,cghpa);
			            }
			            	 break;
			              case 2:
			            	 {
							 
			            	 int cgbp=32;
			            	 	scalc(f,csr,cgbp);
						}
							 break;
						case 3:
			            	{
							int cgap=30;
			            		scalc(f,csr,cgap);
			            	 
			            	} break;
			            case 4:
			            	 {
							 
			            	 int cghpb=32;
			            	 	scalc(f,csr,cghpb);
						}
				
							 break;
						case 5:
						goto start4;
						break;
						default:
						 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
						 goto start72;	 
						}
						break;
			case 10:
					printf("\nchoose the variety of seeds\n1. DHAM-103\n2. DHAM-105\n3. DHAM-1\n4. TRISULATHA\n5. back\n\nEnter our choice : ");
					scanf("%d",&o);
					switch(o)
				    {
				    case 1:
				      	{
				     	int mdpa=30;
				      	scalc(f,msr,mdpa);
			         	}
					    break;
				    case 2:
					      {
					        printf("Required seeds for your field : %f",f*msr);
					         int mdpb=32;
					  		scalc(f,msr,mdpb);
						   }	
						    break;
				    case 3:
					       {
						   int mdpc=30;
					        scalc(f,msr,mdpc);
			             	}
					      break;
				    case 4:
				              {
							    int mtp=30;
				             	scalc(f,msr,mtp);

				            	}   
							 break;
					case 5:
					    goto start4;
						break;
					default:
					     printf("Invalid Input :\nPlease choose carefully>>>>  ");  
						 goto start72;
						 break;			 
						}
						break;
			case 11:
					printf("\nchoose the variety of seeds\n1. ICMB-155\t\t\t4. WCC-75\n2. ICTP-8203\t\t\t5. RAJ-171\n3. NDFB-3\t\t\t6.DHANSHAKTI\nEnter our choice : ");
					scanf("%d",&p);
						switch(p)
				    {
					case 1:
					        {
							int bicmbp=30;
					         scalc(f,bsr,bicmbp);
			             	}
					         break;
				    case 2:
					 {
					 
					         int bictpp=32;
							 scalc(f,bsr,bictpp);
							 }break;
						case 3:
				             {
								 	int bndfbp=30;
				                  scalc(f,bsr,bndfbp);
					             }break;
				    case 4:
					{
					
					 int bwccp=32;
							 scalc(f,bsr,bwccp);
						}
							 break;

						case 5:
					       {
						   int brajp=30;
					scalc(f,bsr,brajp);
					
					      }break;
				    case 6:
					{
					
					 int bdsp=32;
					 scalc(f,bsr,bdsp);
					}
							 break;
						
						case 7:
						goto start4;
						break;
						default:
							goto start71;
							
						break;}
			case 12:
					printf("\nchoose the variety of seeds\n1. CO-1\n2. CO-2\n3. Back\n\nEnter our choice : ");
					
					start71:
					scanf("%d",&q);
						 switch(q)
			            {
			              case 1:
			            	{
							int scocp=30;
			            	scalc(f,ssr,scocp);
			        }
			            	 break;
			              case 2:
			            {
						
			            	 int scodp=32;
							 scalc(f,ssr,scodp);
					}
							 break;
							 case 3:
							 	goto start4;
							 	break;
							
	             	default	:
				     printf("Invalid Input :\nPlease choose carefully>>>>  ");  
				     goto start71;
				    	break;	 	    
			    }
			          break;  
			case 13:
				      goto start;
			        	break;
			default:
			           printf("Invalid Input :\nPlease choose carefully>>>>  ");  
			             goto start84;      
			           break;}
case 3:
            printf("choose crop to calculate furtilizer:");
            
	        printf("\n1. Wheat\n2. Gram\n3. Pea\n4. Mustard\n5. Linseed\n6. Pulses\n7. Rice\n8. Groundnut\n9. Cotton\n10. Maiz\n11. Bajara\n12. Soyabean\n13. Back\n");
            start83:
			scanf("%d",&d);
            switch(d)
			{
			    case 1 :
					{
				     	float ft=136.5;
			             	fcalc(f,ft,pricenpk);
			            }break;
				case 2: 
				        {
						int ft= 15.5;
					    fcalc(f,ft,pricenpk);
				      	}break;
				case 3:
					{
					float ft= 36.2;
			    	    fcalc(f,ft,pricenpk);
			    	    }break;
				    case 4:
				    	{
						float ft=25;
				       fcalc(f,ft,pricenpk);
				    	}break;  	
			 	    case 5:
			 	    	{
						 float ft=11.5;
			       		fcalc(f,ft,pricenpk);
			    		}break;
				case 6:
					{
					
					int ft=20;
					fcalc(f,ft,pricenpk);
				}	break;
				case 7 :
			    	{
							int ft=119.9;
						fcalc(f,ft,pricenpk);
			     		}break;
			     	case 8:
			    		{
						int ft=76.6;
						fcalc(f,ft,pricenpk);
			    		}break;
			    	case 9:
			    	    {
						int ft=116.5;
						fcalc(f,ft,pricenpk);
			    	   } break;
				    case 10:
				        {
						int ft=10;
						fcalc(f,ft,pricenpk);
				    	}break;  	
			 	    case 11:
			       		{
						   int ft=25;
						   fcalc(f,ft,pricenpk);
			    		}break;
			     	case 12:
			     		{
						 int ft=67;
				        fcalc(f,ft,pricenpk);
			     		}break;	
	             	case 13:
	             	goto start;
	             	break;
					 default	:
				    	 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
				    	 goto start83;
				    	break;	 	    
			        }
			break;
case 4:
	        printf("For further Help and Details ask for expert\n contact number :1800-180-1551");
            printf("\n\nPress 1 for Main menu :  ");
            start82:
			scanf("%d",&t);
			if (t==1)
			{
			goto start;	
			}
			else{
				 printf("Invalid Input :\nPlease choose carefully>>>>  ");  
				 goto start82;
				 
			}
			break;
default :
		    printf("Invalid Input :\nPlease choose carefully>>>>  ");  
		    goto start100;
			break; 
	}
	getch();
return 0;
}

int scalc(int r,int s,int t)
{
	printf("\n");
	int i;
	for(i=1;i<=80;i++)
	{
     printf("_");}
	printf("\nRequired seeds for your field : %d Kg",r*s);
	printf("\ncost : %d Rupees",r*s*t);
	printf("\nSeeds price : %d rupees/Kg",t);
	printf("\n");
	for(i=1;i<=80;i++)
	{
     printf("_");
    }
	}
	
	
    int fcalc(int l,int m,int n)
   {  
   int i;
	printf("\n");
	for(i=1;i<=80;i++)
	{
     printf("_");
	 }
	printf("\nFertilizer Required For Your Wheat : %d kg",l*m);
	printf("\nCost of your required fertilizer : %d Rs.",l*m*n);
	printf("\nPrice : %d Rs.",n);
	printf("\n");
	for(i=1;i<=80;i++)
	{
     printf("_");
	 }
	getch();
	}

