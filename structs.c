/*
   Purpose: To define parts for a PC build
   Written by: Ryan Sciarabba
   Language: c (gcc target)
   Version: 1.2.5
   Date of Creation: November 12th, 2018
   Date of Last Revision: November 12th, 2018
*/

#include <stdio.h>

//Define a struct with the brand, name, and price of each part
struct Part{
	char brand[50];
	char name[50];
	double price;
};

int main(void){

	//Define structs for each part
	struct Part Case;
	struct Part GPU;
	struct Part CPU;
	struct Part RAM;
	struct Part PSU;
	struct Part Storage;
	struct Part Mobo;
	struct Part Cooler;
	
	double total; //Total price

	//Take in information on the case
	printf("Input the case brand >>> ");
	scanf("%s", &Case.brand);
	printf("Input the case model >>> ");
	scanf("%s", &Case.name);
	printf("Input the case price >>> ");
	scanf("%lf", &Case.price);
	
	//Take in information on the GPU
	printf("\n");
	printf("Input the GPU brand >>> ");
	scanf("%s", &GPU.brand);
	printf("Input the GPU model >>> ");
	scanf("%s", &GPU.name);
	printf("Input the GPU price >>> ");
	scanf("%lf", &GPU.price);
	
	//Take in information on the CPU
	printf("\n");
        printf("Input the CPU brand >>> ");
        scanf("%s", &CPU.brand);
        printf("Input the CPU model >>> ");
        scanf("%s", &CPU.name);
        printf("Input the CPU price >>> ");
        scanf("%lf", &CPU.price);

	//Take in information on the RAM
        printf("\n");
        printf("Input the RAM brand >>> ");
        scanf("%s", &RAM.brand);
        printf("Input the RAM model >>> ");
        scanf("%s", &RAM.name);
        printf("Input the RAM price >>> ");
        scanf("%lf", &RAM.price);

	//Take in information on the PSU
	printf("\n");
        printf("Input the PSU brand >>> ");
        scanf("%s", &PSU.brand);
        printf("Input the PSU model >>> ");
        scanf("%s", &PSU.name);
        printf("Input the PSU price >>> ");
        scanf("%lf", &PSU.price);
	
	//Take in information on the Storage
	printf("\n");
        printf("Input the Storage brand >>> ");
        scanf("%s", &Storage.brand);
        printf("Input the Storage model >>> ");
        scanf("%s", &Storage.name);
        printf("Input the Storage price >>> ");
        scanf("%lf", &Storage.price);

	//Take in information on the Motherboard
	printf("\n");
        printf("Input the Motherboard brand >>> ");
        scanf("%s", &Mobo.brand);
        printf("Input the Motherboard model >>> ");
        scanf("%s", &Mobo.name);
        printf("Input the Motherboard price >>> ");
        scanf("%lf", &Mobo.price);

	//Take in information on the cooler
	printf("\n");
        printf("Input the Cooler brand >>> ");
        scanf("%s", &Cooler.brand);
        printf("Input the Cooler model >>> ");
        scanf("%s", &Cooler.name);
        printf("Input the Cooler price >>> ");
        scanf("%lf", &Cooler.price);

	//Calculate the total price of all parts
	total = Case.price + GPU.price + CPU.price + RAM.price + PSU.price + Storage.price + Mobo.price + Cooler.price;
	
	//Print the information of each part and the total price of the PC
	printf("\n");
	printf("Case: %s, %s, %.2f\n", Case.brand, Case.name, Case.price);
	printf("GPU: %s, %s, %.2f\n", GPU.brand, GPU.name, GPU.price);
	printf("CPU: %s, %s, %.2f\n", CPU.brand, CPU.name, CPU.price);
	printf("RAM: %s, %s, %.2f\n", RAM.brand, RAM.name, RAM.price);
	printf("PSU: %s, %s, %.2f\n", PSU.brand, PSU.name, PSU.price);
	printf("Storage: %s, %s, %.2f\n", Storage.brand, Storage.name, Storage.price);
	printf("Motherboard: %s, %s, %.2f\n", Mobo.brand, Mobo.name, Mobo.price);
	printf("Cooler: %s, %s, %.2f\n\n", Cooler.brand, Cooler.name, Cooler.price);
	printf("Total Price: %10.2f", total);

	return 0;
}
