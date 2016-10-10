#include<stdio.h>
class User
{
private:
	int id;
	int age;
public:
	int getId(){return this->id;}
	int getAge(){return this->age;}
	User(int id, int age){
		this->id =id;
		this->age = age;
	}
};

int main(){
	User u = User(1,34);
	printf("%d\n", u.getAge());
}
