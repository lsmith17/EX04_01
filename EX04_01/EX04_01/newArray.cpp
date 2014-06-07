#include<iostream>
using namespace std;

void prompt_count(int*size);
int * alloc_array(int size);
void populate_numbers(int* numbers, int size);
int count_avgnums(int* numbers, int size);

int main(){
	int arraysize;
	prompt_count(&arraysize);
	int* numbers = alloc_array(arraysize);
	populate_numbers(numbers, arraysize);
	cout << "Integers entered: " << count_avgnums(numbers, arraysize) << endl;
	cout << " Integers above the average: " << endl;

	delete[]numbers;
}
void prompt_count(int* size) {
	cout << "How many numbers will you enter?" << endl;
	cin >> *size;
}
int * alloc_array(int size)
{
	int* pintarray = new int[size];

	for (int i = 0; i < size; i++)
		pintarray[i]++;

	return pintarray;
}

void populate_numbers(int* numbers, int size){
	for (int* curr = numbers; curr = numbers + size; curr++){
		cout << "Enter number: " << endl;
		cin >> *curr;
	}
}
int count_avgnums(int* numbers, int size){
	int average = *numbers / size;
	int avg_numbers = 0;
	for (int* curr = numbers; curr < numbers + size; curr++){
		if (avg_numbers > average )
		avg_numbers++;
}
	return avg_numbers;
}