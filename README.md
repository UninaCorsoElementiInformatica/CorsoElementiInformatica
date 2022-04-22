# Lezione 02  
In questa lezione abbiamo mostrato le istruzioni condizionali (if / else) con i relativi blocchi.  Di seguito una lista di consigli utili ind
## Consigli a valle della lezione
### 1. I blocchi di codice contengono parentesi GRAFFE, le funzioni contengono e le istruzioni condizionali parentesi TONDE    
Esempio:
```  
// Le parentesi tonde si usano vicino le funzioni   
void funzione()  
{
  printf("Le parentesi graffe racchiudono il codice"); 
}  
```    


### 2. Gli operatori booleani sono && per AND , || per OR, == per una uguaglianza 
``` 
if (a == 0 && b == ) 
{
  printf("SONO QUI SOLO SE a è 0 e b è 0); 
} 
if (a == 0 || b == 0) 
{
  printf("SONO QUI SE a è 0 OPPURE b è 0); 
} 
``` 

### 3. non inserire ; dopo l'if   
Questo:  
```  
if (a == 0); 
printf("NON ESEGUIRO'");   
```   
E' sbagliato. Se mettete ; dopo l'if, il codice dopo l'if non viene eseguito.   
Giusto:   
```  
if (a == 0)
{
 printf("Qui ci andrò"); 
}
```   

### 3. Per le costanti, utilizzare const int o #define     
Con costanti:   
```  
const int ERR_NO_ERRORI = 0;   
```   
In questo caso si definisce una variabile.   
Con la direttiva "define":   

``` 
#define ERR_NO_ERRORI 0   
```   
NOTA: Non c'è l'uguale nella DEFINE   

Questo è sbagliato:  
```  
#define ERR_NO_ERRORI=0   
```        


### 4. Ricordare i punti e virgola ad ogni istruzione, definizione e dichiarazione   
```  
int a = 0  
printf("Questo è un errore, manca punto e virgola sopra\n");   
```    




