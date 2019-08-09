#include<iostream.h>
#include<conio.h>

class Worker {
    private:
     int pr1, pr2, pr3, pr4, pr5;
     char *prc1;
    public:
      int pb1, pb2;
	 Worker() {
		pr1=0;pr2=0;pr3=0;pr4=0;
	}

      void EnterName(char *nm) {
	    prc1 = nm;
	}
	char* GetName() {
		return prc1;

	}

	int EnterDailyWage() {
		int a;
		cout<<"Enter Your Daily Wage ";
		cin>>a;
		cout<<endl;
		pr1 = a;
		return pr1;
	}
	void DisplayDailyWage() {
		cout<<pr1<<endl;


	}
	int EnterWorkingDays() {
		int b;
		cout<<"Enter The Number Of Woking Days ";
		cin>>b;
		pr2 = b;
		return pr2;
	}

	int SalaryWithCA() {
		int c, ca = 50;
		c = pr2*ca;
		pr3 = c;
	       return pr3;
	}

	int HRA() {
		int hra;
		hra =(pr2*25)/100;
		pr4 = hra;
		return pr4;
	}
	int TotalSalary() {
		int tot;
		tot = (pr1*pr2) + pr3 + pr4;
		pr5 = tot;
		return pr5;
	}

}
 main(){
	char *sname;
	clrscr();
	Worker x;
	x.pb1 = 25;
	x.pb2 = 619;

	cout<<"Enter Your Name ";
	cin>>sname;

      x.EnterName(sname);
	cout<<endl;
       //	x.DisplayName();
	cout<<endl;
	x.EnterDailyWage();
	cout<<endl;
	x.DisplayDailyWage();
	cout<<endl;
	x.EnterWorkingDays();
	cout<<endl;
	x.SalaryWithCA();
	cout<<endl;
	x.HRA();
	cout<<endl;
	cout<<"Your Total Salary Is "<<x.TotalSalary();
	getch();
}
