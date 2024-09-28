#include <stdio.h>

int main() {
   int t[]={ 20,24,30,70};
   printf("%d\n",t[0]);
   t[1]=33;
   printf("%d\n",t[1]);
    return 0;
}


Challenge 6



#include <stdio.h>

int main() {
    int n, i;
    int fact;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);
    
    int tab[n];

    printf("Entrez les %d éléments du tableau :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &fact);

    printf("Tableau résultant :\n");
    for (i = 0; i < n; i++) {
        tab[i] *= fact;
        printf("%d\n ", tab[i]);
    }
    



    return 0;
}





Challenge 7
#include <stdio.h>

int main() {
   int a,i,x;
  
   printf ("enter le element de tabeleau:");
   scanf("%d",&a);
   int tab[a];
   for (i=0;i<a;i++){
   printf("donner le nombre n:");
   scanf("%d",&tab[i]);
   } printf("enter unnber:");
       scanf("%d",&x);
   for (i=a-1;i>=0;i--){
      
      printf("%d*%d=%d\n",x,tab[i],x*tab[i]);
}
    return 0;
}



Challenge 8


#include <stdio.h>

int main() {
 
    int orig[5] = {1, 2, 3, 4, 5};
    int taille ;
    int copie[5];

    for (int i = 0; i < 5; i++) {
        copie[i] = orig[i];
    }

    printf("Tableau original : ");
    for (int i = 0; i < 5; i++) {
        printf("%d\n ", orig[i]);
    }
    
    printf("Tableau copié : ");
    for (int i = 0; i < 5; i++) {
        printf("%d\n ", copie[i]);
    }

    return 0;
}


SOMME DEUX TABLEAU
#include <stdio.h>

int main() {
   
    int tab1[3] = {1, 2, 3};
    int tab2[3] = {4, 5, 6};
    int a;
    int somme[a];

    for (int i = 0; i < 3; i++) {
        somme[i] = tab1[i] + tab2[i];
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", somme[i]);
    }
    

    return 0;
}



challenge 9



#include <stdio.h>

int main() {
    
    int i, t,a;

   printf("donner element de tableau:");
   scanf("%d",&a);
   int tab[a];
    
    for (i = 0; i <a; i++) {
        printf("Tableau:");
        scanf("%d",&t);
        tab[i]=t;
    
        
    }
    for (i = a-1; i >=0; i--) {
        printf("%d \n" ,tab[i]);
}
    return 0;
}