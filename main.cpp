#include <iostream>

void triangle(int a,int b)
{
for (int i=1;i<=a+a-1;i++)
	{

	 if (i<=a)
	 {
		std::cout<<std::string(i,'*')<<std::endl;

	 }
	 else
	 {
		std::cout<<std::string(b,'*')<<std::endl;
		b--;
	 }
	}
}
int main() {
	int n,b;
	std::cin>>n;
	b=n-1;
    triangle(n,b);
return 0;
}