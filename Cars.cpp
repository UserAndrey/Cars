#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class Car {
public:
    void set_colour(string colour){
    this->colour=colour;
                                  }
                                  
    void set_model(char *Model) {
    	this->Model=Model;
	                            }

    int get_colour() {
    cout<<"You have "<<colour<<" "<<Model<<endl;
	return 0;        }
    int get_cars()   {
    	int k=0, count=0;
    for(vector<string>::const_iterator i=Cars.begin();i!=Cars.end(); i++)
    {k++;
    if (k%4<=Cars.size())
    cout<<right<<setw(4)<<*i<<"   ";
	count++;
	if(count%4==0) cout<<"\n"; };
	return 0;    
                    }
    void print_model() {
    	cout<<*Model<<endl;
                       }
                       
    void show_size() {
       cout<<"\n Quantity of Cars: "<<Cars.size()<<endl;	
	                }
private:
  char* Model;
  char* engine_type;
  float engine_volume;
  short year;
  string colour;
  vector<string>Country;
  vector<string>Cars = {"BMW","Mercedes","Audi","Opel","Porsche","Volkswagen","McLaren","Aston Martin","Bentley","Rolls Royce","Lotus","SAAB","Volvo","Renault","Pegeault","Citroen","Seat","Bugatti","Ferrari","Lamborghini","Maserati","Fiat","Dacia","Toyota",
                        "Mitsubishi","Lexus","Suzuki","Mazda", "Acura", "Infinity","Ssang Young", "Lifan","Chery","Geely", "Haval", "Ford", "Cadillac", "GMC", "Jeep", "Hummer", "Pontiac","Chevrolet", "Buick", "Dodge","Lincoln","Tesla"};
           };
int main (int argc, char *argv[]) {
    Car car;
    //car.Model="X5";
    car.set_colour("black");
    //car.print_model();
    car.set_model("BMW X6");
    car.get_colour();
    car.get_cars();
    Car car2;
    car2.show_size();
                                  }
