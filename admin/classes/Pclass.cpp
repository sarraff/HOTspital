#include <bits/stdc++.h>
using namespace std;

// DO NOT TAMPER WITH

class patient{
private:
	long ph;
	long emergency;
public:
	char record[100];
	float temp;
	float weight;
	char rRemarks[20];
	char dRemarks[50];
	int medicine[20][2];
	int LDAP;
	char fname[10];
	char lname[10];
	patient(){
		for (int i = 0; i < 20; ++i){
			medicine[i][0]=0;medicine[i][1]=0;
		}
	};
	patient(int x){
		LDAP=x;
		for (int i = 0; i < 20; ++i){
			medicine[i][0]=0;medicine[i][1]=0;
		}
	}
	patient(string fx,string lx,int x){
		LDAP=x; strcpy(fname,fx.c_str()); strcpy(lname,lx.c_str());
		for (int i = 0; i < 20; ++i){
			medicine[i][0]=0;medicine[i][1]=0;
		}
	}
	friend void maintainInventory(patient* p);
	friend patient* findPrescription(int LDAP);
	friend patient* writePrescription(patient* p);
	friend void updateRecords(patient* p);
	friend int chooseDoctor();
	friend void takeAppointment(int num);
	void onlineDiscussion(int p){
		cout<<"OnlineDiscussion"<<endl;
		return;
	}
	void setPh(long x){
		ph=x;
	}
	void setEm(long x){
		emergency=x;
	}
		
};
