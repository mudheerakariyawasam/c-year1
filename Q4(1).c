#include <stdio.h>
#include <string.h>

#define SIZE 1000

void store_weight(char name[SIZE], float weight);
int hash_value(char name[SIZE]);
void retrieve();

int weights[SIZE];

int main(){
    char name[SIZE];
    float weight;
    char ans;
    
    store_weight("Amal",77);
	store_weight("Binelu",44);
	store_weight("Chamal",110);
	store_weight("Daniel",88);
	store_weight("Erandi",66);
	store_weight("Fauzaan",99);
	store_weight("Girisha",100);
	
    printf("Do you wish to store a new weight? [Y/N] \n");
    scanf("%c", &ans);
    
    if(ans == 'Y'|| ans == 'y'){
        printf("Enter name: \n");
        scanf("%s", name);

        printf("Enter weight: \n");
        scanf("%f", &weight);
        
        store_weight(name, weight);
    }
    else {
        retrieve();
    }
    
    retrieve();
    
}
    
void retrieve(){
    char r_name[SIZE];
    
    printf("Enter name to retrieve the weight: \n");
    scanf("%s", r_name);
        
    printf("The weight of %s is %d \n", r_name, weights[hash_value(r_name)]);
}


void store_weight(char name[SIZE], float weight)
{
    int hash;
    hash = hash_value(name);
    weights[hash] = weight; //here weight is the input we obtained
}

int hash_value(char name[SIZE]){
    int len, hash = 0, i;
    len = strlen(name);

    if (len != 0){
        for(i=0; i<2; i++){
            int n;

            n = name[i]; //int is assigned to string (ASCII by default)

            hash += n;
        }
        return hash;
    }

}

 
