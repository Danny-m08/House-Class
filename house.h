class House {

public:

 House(int s, char b = 'X', char f = '*' );
 int GetSize();
 int Perimeter();
 double Area();

 void Grow();
 void Shrink();
 void SetBorder(char b);
 void SetFill(char f);
 void Draw();
 void Summary();

private:
 int size;
 char border, fill;

};
