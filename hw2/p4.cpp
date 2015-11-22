#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

class HQ {

	public:
		HQ(const int theLifeValue, const int theRedOrBlue, const int theWarriorValue[],
	const string theWarriorNames[], const int order[], const string theHeadquarterNames[]);
		~HQ(){};
		int getLifeValue(){ return lifeValue;}; 
		int getWarriorValue(int position){ return WarriorValues[position];};
		void product(int time, int position);

	private:
		int lifeValue;
      	int redOrBlue; // red 0 blue 1
      	int count; // number of the warrior
      	int WarriorCounts[5]; 
      	string HQName;
      	string WarriorNames[5]; 
      	int WarriorValues[5]; // every warrior's initial value	

};

HQ::HQ(const int theLifeValue, const int theRedOrBlue, const int theWarriorValue[],
	const string theWarriorNames[], const int order[], const string theHeadquarterNames[]){
	count = 0;
	lifeValue = theLifeValue;
	redOrBlue = theRedOrBlue;
	HQName = theHeadquarterNames[redOrBlue];
	for(int i=0;i<5;i++){
		WarriorCounts[i] = 0;
		WarriorNames[i] = theWarriorNames[order[i]];
		WarriorValues[i] = theWarriorValue[order[i]];
	}
}

void HQ::product(int time, int position)
{
    count++;
    WarriorCounts[position]++; 
   
    cout << setfill('0')<<setw(3) << time << " " << HQName << " " << WarriorNames[position]
    << " " << count << " born with strength " << WarriorValues[position] << "," << WarriorCounts[position]
    << " " << WarriorNames[position] << " in " << HQName << " headquarter" << endl;
    lifeValue -= WarriorValues[position];
}


int main()  {

	int cases,num=1;
    cin >> cases;
 
    const int redOrder[5] = {2,3,4,1,0};
   	const int blueOrder[5] = {3,0,1,2,4};
   	const string HQNames[2] = {"red", "blue"};
   	const string priorNames[5] = {"dragon","ninja","iceman","lion","wolf"};

    while(cases--){

    	int i,life;
    	cin >> life; //total life value

		int priorValue[5], minValue, redPosition = 0, bluePosition = 0;
		bool redHadStop = false, blueHadStop = false;
   		
   		for(i=0;i<5;i++)
   			cin >> priorValue[i]; //initial life value

    	cout << "Case:" << num << endl;
    	num++;

		minValue = priorValue[0];
        for(int j = 1; j < 5; j++){
          	if (priorValue[j] < minValue){
                minValue = priorValue[j];
            }
        }

		HQ redOne = HQ(life, 0, priorValue, priorNames, redOrder, HQNames);
	    HQ blueOne = HQ(life, 1, priorValue, priorNames, blueOrder, HQNames);

	    for(int time=0; !redHadStop || !blueHadStop ; time++){
	    	if(!redHadStop){
	    		if(redOne.getLifeValue() < minValue){
	    			cout << setfill('0')<<setw(3) << time << " red headquarter stops making warriors" << endl;
	    			redHadStop = true;
	    		}
	    		else{
	    			while(true){
	    				if(redOne.getLifeValue() >= redOne.getWarriorValue(redPosition)){
	    					redOne.product(time, redPosition);
	    					if (redPosition == 4 ? redPosition = 0: redPosition++);
	    					break;
	    				}
	    				else{
	    					if (redPosition == 4 ? redPosition = 0: redPosition++);
	    				}
	    			}
	    		}
	    	}

 			if(!blueHadStop){
                if (blueOne.getLifeValue() < minValue){
                    cout << setfill('0')<<setw(3)<< time << " blue headquarter stops making warriors" << endl;
                    blueHadStop = true;
                }
                else{
                    while (true){
                        if (blueOne.getLifeValue() >= blueOne.getWarriorValue(bluePosition)){
                        	blueOne.product(time, bluePosition);
                            if (bluePosition == 4 ? bluePosition = 0: bluePosition++);
                            break;
                        }
                       	else{
                            if (bluePosition == 4 ? bluePosition = 0: bluePosition++);
                        }
                    }
                }
            }	    	


	    }


    }



    return 0;
}