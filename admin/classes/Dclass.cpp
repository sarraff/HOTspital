#include <bits/stdc++.h>
#include "Pclass.cpp"
using namespace std;




class doctor: virtual public patient{
public:
	int LDAP;
	char name[15];
	char speciality[15];
	bool available;
	int patientQ[15];
	doctor(){
		for (int i = 0; i < 15; ++i)
			patientQ[i]=0;
	};

	int nextPatient(){

		int next=patientQ[0];
		for(int i=0;i<13;i++)
			patientQ[i]=patientQ[i+1];
		patientQ[14]=0;
		available=1;
		return next;
	}

	void onlineDiscussion(int p){
		cout<<"OnlineDiscussion"<<endl;
		return;
	}	
	void treatPatients(){
		int pLDAP=nextPatient();
		cout<<pLDAP<<endl;
		if(pLDAP==0){
			cout<<"No patients in the queue"<<endl;
			return;
		}
		patient p(pLDAP);
		//writePrescription(p);
		//cout<<"Medical Leave Required"<<endl;
		//bool leave;
		//cin>>leave;
		//if(leave)
			//notifyAdmin();
		//updateRecords();
		return;
	}

	friend void writePrescription(patient p);   //  IN LOGIN.CPP
	

	
};