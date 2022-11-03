#include <stdio.h>
#include <string.h>
#define  max 100
#include <stdlib.h>
#include <windows.h>

void menu(int &choix)

{      
	    printf("\n\n\t\t\t\t\t\t\t\t\t------- M E N U ------------\n");
        printf("\n\n\t\t\t\t\t\t\t\t\t1.  Remplire la Bibliotheques.");
        printf("\n\n\t\t\t\t\t\t\t\t\t2.  ajouter un livre au debut.");
        printf("\n\n\t\t\t\t\t\t\t\t\t3.  ajouter un livre a la fin.");
        printf("\n\n\t\t\t\t\t\t\t\t\t4.  afficher listes des livres. ");
        printf("\n\n\t\t\t\t\t\t\t\t\t5.  afficher info d un livre par son ID.");
        printf("\n\n\t\t\t\t\t\t\t\t\t6.  afficher les auteurs sans doublons");
        printf("\n\n\t\t\t\t\t\t\t\t\t7.  afficher ordre alphabetique");
        printf("\n\n\t\t\t\t\t\t\t\t\t8.  Rechercher un livre par son ID.");
        printf("\n\n\t\t\t\t\t\t\t\t\t9.  supprimer un livre appartir de son numero.");
        printf("\n\n\t\t\t\t\t\t\t\t\t10. modifier un livre apartir de son numero .");
        printf("\n\n\t\t\t\t\t\t\t\t\t11. sauvegarder.");
        printf("\n\n\t\t\t\t\t\t\t\t\t12. quitter\n\t");
        printf("\n\n\t\t\t\t\t\t\t\t\tEnter votre choix:--> ");
        scanf("%d",&choix);
	system("cls");
}


typedef struct 
{
	int j;
	int m;
	int a;
}annee;




typedef struct
{
	char titre[10];
	char auteur[10];
	int id;
	annee al;
}livre;


typedef livre TTAB[max];


int Find_id(TTAB t,int n,int id)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(id==t[i].id)
		{
			return 1;
		}
	}
	return 0;
}

void Remplir(TTAB t,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
        printf("\nentrez un numero unique pour le livre :");
	    scanf ("%d",&t[i].id);
	    printf("donner les informations dU LIVRE num %d : \n",i+1);
	    printf("le titre :");
     	scanf("%s",t[i].titre);
    	printf("\nl'auteur :");
	    scanf("%s",t[i].auteur);
	do
		   {
		   	    printf("donnez un jour :");
		   	    scanf("%d",&t[i].al.j);
		   }while(t[i].al.j<1 || t[i].al.j>31);
		   
		    do
		   {
		   	    printf("donnez un mois :");
		   	    scanf("%d",&t[i].al.m);
		   }while(t[i].al.m<1 || t[i].al.m>12);
		   
		    do
		   {
		   	    printf("donnez un annee :");
		   	    scanf("%d",&t[i].al.a);
		   }while(t[i].al.a<1900 || t[i].al.a>2099);
		   
	
	}
}
void AjouterAudebut(TTAB t,int &n)
{
		int i,j,m,a,id,rep;
	   
	if(n==max)
	  {
	  	 printf("\n Tableau Plein");
	  }
	else
	{ 	  
	
	
	     for(i=n;i>0;i--)
	          { 
	             t[i]=t[i-1];
	          }  
	  	  do{
		  
		   do
	  	   {
	  	   	    printf("\nentrez un numero unique pour le livre :");
	  	   	    scanf ("%d",&t[n].id);
	  	   	  
		   }while(Find_id(t,n,t[n].id)==1);
		   
		        printf("donnez un titre :");
		        scanf("%s",t[n].titre);
		        
		        printf("donnez l'auteur :");
		        scanf("%s",t[n].auteur);
		   do
		   {
		   	    printf("donnez un jour :");
		   	    scanf("%d",&j);
		   }while(j<1 || j>31);
		   
		    do
		   {
		   	    printf("donnez un mois :");
		   	    scanf("%d",&m);
		   }while(m<1 || m>12);
		   
		    do
		   {
		   	    printf("donnez un annee :");
		   	    scanf("%d",&a);
		   }while(a<1900 || a>2099);
		   
		   
		   t[n].al.a=a;
		   t[n].al.j=j;
		   t[n].al.m=m;
		   n++;
		printf("Voulez vous repeter 0=NON / 1=OUI:");
		scanf("%d",&rep);
	}while((rep==1));	 
	  }  
}

void Ajouterfin(TTAB t,int &n)
{
		int j,m,a,rep;
	
	if(n==max)
	  {
	  	 printf("\n Tableau Plein");
	  }
	else
	  {
	  	do{
		  
		   do
	  	   {
	  	   	    printf("\nentrez un numero unique pour le livre :");
	  	   	    scanf ("%d",&t[n].id);
	  	   	  
		   }while(Find_id(t,n,t[n].id)==1);
		   
		        printf("donnez un titre :");
		        scanf("%s",t[n].titre);
		        
		        printf("donnez l'auteur :");
		        scanf("%s",t[n].auteur);
		   do
		   {
		   	    printf("donnez un jour :");
		   	    scanf("%d",&j);
		   }while(j<1 || j>31);
		   
		    do
		   {
		   	    printf("donnez un mois :");
		   	    scanf("%d",&m);
		   }while(m<1 || m>12);
		   
		    do
		   {
		   	    printf("donnez un annee :");
		   	    scanf("%d",&a);
		   }while(a<1900 || a>2099);
		   
		   
		   t[n].al.a=a;
		   t[n].al.j=j;
		   t[n].al.m=m;
		   n++;
		printf("Voulez vous repeter 0=NON / 1=OUI:");
		scanf("%d",&rep);
	}while((rep==1));	 
	  }  
}
/*void Afficherlist(TTAB t,int n)
{
   int i;
	for(i=0;i<n;i++)
	   {
				    printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
		    printf("\nle nom du livre est : %s",t[i].titre);
	   	    printf("\nl'auteur est : %s ",t[i].auteur);
	   	    printf("\nla date du creation du livre est : %d/%d/%d",t[i].al.j,t[i].al.m,t[i].al.a);
	   	    printf("\nle numero du livre est : %d",t[i].id);
	   	    printf("\n");
		            printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
		
	   }
}
*/

void Afficher_par_id(TTAB t,int n)
{
	int i,D,a=0;
	printf("donner ID:");
	scanf("%d",&D);
	for(i=0;i<n;i++)
	{
		if(t[i].id==D)
		{
			a=1;
				    printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
		    printf("\nle nom du livre est : %s",t[i].titre);
	   	    printf("\nl'auteur est : %s ",t[i].auteur);
	   	    printf("\nla date du creation du livre est : %d/%d/%d",t[i].al.j,t[i].al.m,t[i].al.a);
	   	    printf("\nle numero du livre est : %d",t[i].id);
	   	    printf("\n");
		            printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
		
		}
		
	}
	if(a==0)
		{   printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *\n");
			printf("ID n existe pas\n");
			printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * ");
		}
	
}
int occu_auteur(TTAB t,int n,char auteur[10])
{
	int comp=0,i,j;
	for(i=0;i<n;i++)
	 {	  
	 	     if(strcmp(t[i].auteur,auteur)==0)
			  {
			  	 comp++;
			  }	 	
	 }
	  return comp;	 
}

/*void Afficher_auteur_occu(livre t[max],int n)
{
	int i=0,k;
	while(i<n)
	   {	 
	   
	    for(k=i;k>=0;k--)
		              {
		            	if(strcmp(t[i].auteur,t[k].auteur)==0)
		                 {
		  	 	            i++;
		  	 	            k=0;
			             }
			           
			          }
	        
		   if(occu_auteur(t,n,t[i].auteur)>1)
		    {
		    	printf("\nle nom d'auteur est : %s \n",t[i].auteur);
		    	printf("%d\n",i+1);
			}
				i++;
	   }
}
*/


/*void Afficher_auteur_occu(livre t[max],int n) // LAH Y3MIHA LMAMOUN 
{
	int i=0,k,trouve;
	while(i<n)
	   {	 
	        
	    do
         {
             trouve=0;
             for(k=i-1;k>=0;k--)
               {
                  if(strcmp(t[i].auteur,t[k].auteur)==0)
                   {
                       trouve=1;
			           i++;
                   }
               }
         }while(trouve); 
         
	   	    if(occu_auteur(t,n,t[i].auteur)>=1)
	   	      {
	   	    	    printf("\nle nom d'auteur est : %s \n",t[i].auteur);
					printf("%d\n",i);	    
		      }	
		        i++;
	   }
}
*/
void Afficher_auteur_occu(TTAB t,int n)
{
	int i=0,j;
	bool find;
	
	for(i=0;i<n;i++)
	  {
	  	do
	  	 {
	  	 	find=false;
		   
	  	for(j=i-1;j>=0;j--)
               {
                  if(strcmp(t[i].auteur,t[j].auteur)==0)
                   {
                   	    find=true;
			            i++;
			                
                   }
               }
	     }while(find==true);
	               if(occu_auteur(t,n,t[i].auteur)>=1)
	   	             {
	   	    	        printf("\nle nom d'auteur est : %s \n",t[i].auteur);
					    printf("%d\n",i+1);	    
		             }	
	  }	   
}

void Afficher_trier(TTAB t,int n)
{
   int i,j,cp;
   livre x;
   do{
	   cp=0;
	 for(j=0;j<n-1;j++)
	   {	
		if(strcmp(t[j].titre,t[j+1].titre)>0)
		 {
			x=t[j];
			t[j]=t[j+1];
			t[j+1]=x;
			cp++;	
		 }
		
	  }
   }while(cp>0);
  
  
   /* for(j=0;j<n;j++)
      {
      	 if(strcmp(t[j].titre,t[j+1].titre)>0)
      	  {
      	  	    t[j]=x;
      	  	    t[j+1]=t[j];
      	  	    t[j+1]=x;
		  }
	  }
	*/
	for(i=0;i<n;i++)
	   {
	   	    printf("\nle numero du livre est : %d",t[i].id);
	   	    printf("\nle nom du livre est : %s",t[i].titre);
	   	    printf("\nl'auteur est : %s ",t[i].auteur);
	   	    printf("\nla date du creation du livre est : %d/%d/%d",t[i].al.j,t[i].al.m,t[i].al.a);
	   	    
	   }
}

int Rechercher(TTAB t,int n,int id)
{
	int i;
	for(i=0;i<n;i++)
	  {
	  	 if(id==t[i].id)
	      {
	  	     return i;
	      }
      }
	         return -1;
}
void SupprimerParId(TTAB t,int &n,int id)
{
	int i,j;
	bool trouve=false;
	if(n==0)
	  {
	  	 printf("il ya aucun livre a supprimer veuillez resseyer plus tard !");
	  }
	for(i=0;i<n;i++)
	  {
	  	 if(id==t[i].id)
	  	   {
	  	   	    trouve=true;
	  	   	    for(j=i;j<n-1;j++)
	  	   	       {
	  	   	       	   t[j]=t[j+1];  
				   }
				n--;
				i=n;
		   }
	  }
	  if(trouve==false)
	    {
	    	 puts("livre introuvable");
		}
	  else
	    {
	    	 puts("supression reussite ");
		}
}
void ModifierParId(TTAB t,int n,int id)
{
	int j,m,a,x=0;
	    
	    char auteur[20];
	    char titre[20];
	    
	int i;
	for(i=0;i<n;i++)
	  {
	  	 if(id==t[i].id)
	  	   {
	  	   	x=1;
	  	   	  	printf("donnez un nouveau titre :");
		        scanf("%s",t[i].titre);
		        
		        printf("donnez un nouveau nom d'auteur :");
		        scanf("%s",t[i].auteur);
		        
		        do
		           {
		   	         printf("donnez un nouveau jour :");
		   	         scanf("%d",&t[i].al.j);
		           }while(t[i].al.j<1 || t[i].al.j>31);
		   
		        do
		           {
		   	         printf("donnez un nouveau mois :");
		   	         scanf("%d",&t[i].al.m);
		           }while(t[i].al.m<1 || t[i].al.m>12);
		   
		        do
		           {
		   	         printf("donnez une nouvelle annee :");
		   	         scanf("%d",&t[i].al.a);
		           }while(t[i].al.a<1900 || t[i].al.a>2099);
		   }
	  }
	  		if(x==0)
		    {
		    	printf("Livre introuvable ");
			}
			else{
				printf("modification reussite");
			}
}
void Afficher(TTAB t,int n)
{
   int i;
	for(i=0;i<n;i++)
	   {
            printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");	   	
	   	    printf("\nle nom du livre est : %s",t[i].titre);
	   	    printf("\nl'auteur est : %s ",t[i].auteur);
	   	    printf("\nla date du creation du livre est : %d/%d/%d",t[i].al.j,t[i].al.m,t[i].al.a);
	   	    printf("\nle numero du livre est : %d\n",t[i].id);
	   	    printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
	   }
}

static int i;
static FILE* ord=NULL;

void sauvegarder(TTAB t, int n)
{
	system("cls");
	int i;

	ord=fopen("tp.txt","a");
	if(ord==NULL)
	{
		puts("fichier introuvable .\n");
	}else
	  {
	    for(i=0;i<n;i++)
		 {
	        
			 fprintf (ord,"livre num  %d : \n ID du livre : %d\n -- Titre du livre: %s\n -- le nom auteur: %s\n  -- la date : %d/%d/%d\n ",i+1,t[i].id,t[i].titre,t[i].auteur,t[i].al.j,t[i].al.m,t[i].al.a);
	     }
	     fclose(ord);
	  }
}


main()
{
	TTAB t;	
   int n,choix,id;
	    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t   *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
		printf("\n\n\t\t\t\t\t\t\t\t  Presente par-->OTHMANE_ZAHHAOUI||OUSSAMA AATANY.");
		printf("\n\n\t\t\t\t\t\t\t\t  Encadre par-->MD.Lamyae Miara.                 ");
		printf("\n\n\t\t\t\t\t\t\t\t   *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  ");
		printf("\n\n\n\n\n\t\t\t\t\t                            Press any key to continue...... ");
		getchar();
		system("cls");
		 int i;
	    system("cls");
		printf("\n\n\t\t\t\t\t\t\t\t\t<<<< Loading Please Wait >>>>\n");
		for(i=0; i<5; i++)
        {
        	printf("\t\t\t  (*_*)");
            Sleep(300);
        }
        printf("\n");
do{
	menu(choix);
switch(choix)
{
	
	case 1:	 printf("entrez le numero des livres a stocker :");
			 	     	 scanf("%d",&n);
			 	     	 Remplir(t,n);
			 	     	 system("cls");
			 	     	 break;
	case 2:	 AjouterAudebut(t,n);
	                    system("cls");
	      	 	         break;	 	     	 
	                 
	case 3: Ajouterfin(t,n);
	                    system("cls");
	                    break;
    case 4: Afficher(t,n);
            break;
    case 5:Afficher_par_id(t,n);
			 break;
	case 6:Afficher_auteur_occu(t,n);
	         break;
	case 7:Afficher_trier(t,n);
	         break;
    case 8: 
		 if(n==0)
			        	  {
			        	  	 puts("none books == vide .");
						  }
						else
						  {
						  
			          printf("\nentrez le numero du livre a rechercher : ");
			          scanf("%d", &id);
			          if(Rechercher(t,n,id)==-1)
			            {
			                printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *\n");
			            	printf("ce livre n'existe pas\n ");
			            	printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
			            	
						}
						else
						   {
						     printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *\n");
			                 printf("La position du livre a le numero %d est %d \n",id,Rechercher(t,n,id));
			                 printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *"); 
			               }
			            }
			               break;
			            /*
    
		 printf("\nentrez le numero du livre a rechercher : ");
		 scanf("%d", &id);
		if(Rechercher(t,n,id)==-1)
		                {
						   	 printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *\n");
                              printf("ce livre n'existe pas\n ");
		                     printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");
						}
						else
						   {
						   	 printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *\n");
                              printf("La position du livre a le numero %d est %d \n",id,Rechercher(t,n,id));
		                     printf("*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *");   
			               }
			break;
			*/
    case 9:  printf("\nentrez le numero du livre a supprimer : ");
			 scanf("%d", &id);
			 SupprimerParId(t,n,id);
			 break;
	case 10: 	printf("\nentrez le numero du livre a modifier : ");
			    scanf("%d", &id);
			     ModifierParId(t,n,id);
            	 break;
	case 11:		sauvegarder(t,n);
			 	  	break;
}
}while(choix!=12);	
	
	
	
}

