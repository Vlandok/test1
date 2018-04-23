#include <iostream>
using namespace std;

int maxZn(int *arr, int size)
{
   int max;
   int index;
   max = arr[0];
   for(int i=0; i<size; i++) {

		if (arr[i]>=max) {
			index = i;
            max = arr[i];
	    }
		       
   }
 
  return index;
}

int main () {
	int size;
    int *arr;
    setlocale( LC_ALL,"Russian" );
     cout<<"Введите длину массива: ";
     cin>>size;
	 if (size<0) {
		cout<<"Вы вели отрицательную длину массива  "<<endl;
		exit(0);
	 }
	 if (size==0) {
		 cout<<"Массив пустой"<<endl;
		 exit(0);
	 }

	 cout<<"Введите элементы массива: "<<endl;
	 arr = new int[size];
	 for(int i=0; i<size; i++) {
		 cout<< "Введите " << i << " элемент массива: ";
		 cin>>arr[i];
	 }
     
     cout<<"Сам массив: "<<endl;
     for(int i=0; i<size; i++)
     {
         cout<<arr[i]<<"  ";
     }
     cout<<endl<<"Индекс максимального значения из этого массива - "<<(maxZn(arr,size))<<endl;
     delete [] arr;
     system("PAUSE");
	
}
