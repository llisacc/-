#include<stdio.h>
 
class vehicle { 
	public: 
    virtual int numOfWheels()=0;
	virtual int maxSpeed()=0; 
};

class car : public vehicle { 
	public: 
    int numOfWheels(){
    	return 4;
	}
	int maxSpeed(){
		return 400;
	}
}; 

class moto : public vehicle { 
	public: 
    int numOfWheels(){
    	return 2;
	}
	int maxSpeed(){
		return 150;
	}
}; 

int main(){
	vehicle* mycar = new car();
	printf("%d\n", mycar->numOfWheels()); 
	free(mycar);
	vehicle* mymoto = new moto();
	printf("%d", mymoto->numOfWheels()); 
	free(mycar);
	return 0;
} 
