#include<iostream>
#include"house.h"
#include<cmath>
#include<iomanip>

using namespace std;

House::House(int s, char b, char f)
{
if (s < 3) size = 3;
else if (s > 37) size = 37;
else size = s;

if(b >= 33 && b<= 132)  border = b;
else border = 'X';

if(f >= 33 && f<= 132) fill = f;
else fill = '*';
}

int House::GetSize()
{
 return size;
}

int House::Perimeter()
{
 return (size * 3) + 2 + (2 * (size + 2));
}

double House::Area()
{
 return pow(size , 2) + (sqrt(3) / 4 * pow((size+2) , 2));
}

void House::Grow()
{
 if ( (size + 1) > 37) return;
 else  size++;
 return;
}

void House::Shrink()
{
 if ( (size - 1) < 3 ) return;
 else size--;
 return;
}


void House::SetBorder(char b)
{
if(b >= 33 && b<= 132)  border = b;
else border = 'X';
}

void House::SetFill(char f)
{
 if(f >= 33 && f<= 132) fill = f;
 else fill = '*';
}


void House::Draw()
{
 for (int line = 1, spaces = (size+1); line <= (size + 2); line++, spaces--){
	
	for (int space = spaces; space > 0; space--){ cout<<" ";}
	
	if (line == 1) cout << border << endl;
	else if(line == 2) cout<< border << " " << border << endl;
	else if(line == (size + 2))
	{
	 cout<< border<<" "<<border<<" ";
	 for(int i =1; i <= (size-2); i++) {cout<<fill<<" ";}
	 cout<<border<<" "<<border<<endl;
	}
	else if(line > 2){
	cout<< border<<" ";
		for (int i = 1; i <= (line-2); i++)
			{
			 cout<<fill<<" ";
			}
	cout << border<<endl;;
		}
	}
for (int line = 1; line <= (size - 1); line++)
 {
  cout << "  " << border<<" ";
  if (line != (size -1)) {for (int i = 1; i < (size - 1); i++) {cout << fill<<" ";}
cout << border<<endl;}
  else { for (int i = 1; i < size; i++) {cout << border<<" ";}}
 }
cout<<endl;
}

void House::Summary()
{
   cout << "House width and height base to roof = " << size << " units.\n"
	<< "Perimeter of house = " << Perimeter() << " units.\n"
	<< "Area of house = " << setprecision(2) << fixed << Area() << " units.\n"
	<< "House looks like: \n";
	Draw();

}
