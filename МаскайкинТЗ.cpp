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
     cout<<"������� ����� �������: ";
     cin>>size;
	 if (size<0) {
		cout<<"�� ���� ������������� ����� �������  "<<endl;
		exit(0);
	 }
	 if (size==0) {
		 cout<<"������ ������"<<endl;
		 exit(0);
	 }

	 cout<<"������� �������� �������: "<<endl;
	 arr = new int[size];
	 for(int i=0; i<size; i++) {
		 cout<< "������� " << i << " ������� �������: ";
		 cin>>arr[i];
	 }
     
     cout<<"��� ������: "<<endl;
     for(int i=0; i<size; i++)
     {
         cout<<arr[i]<<"  ";
     }
     cout<<endl<<"������ ������������� �������� �� ����� ������� - "<<(maxZn(arr,size))<<endl;
     delete [] arr;
     system("PAUSE");
	
}
