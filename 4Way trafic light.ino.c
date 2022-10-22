int A = 1;
int B = 2;
int C = 3;
int D = 4;
int E = 5;
int F = 6;
int G = 7;
int DP = 8;
int m12_r = 9;
int m12_g = 10;
int m34_r = 11;
int m34_g = 12;

int led12_r = 14;
int led12_y = 15;
int led12_g = 16;
int led34_r = 17;
int led34_y = 18;
int led34_g = 19;
int de_1 = 400;
int de_2 = 200;

void setup(){
	pinMode(A,OUTPUT);
	pinMode(B,OUTPUT);
	pinMode(C,OUTPUT);
	pinMode(D,OUTPUT);
	pinMode(E,OUTPUT);
	pinMode(F,OUTPUT);
	pinMode(G,OUTPUT);
	pinMode(DP,OUTPUT);
	pinMode(m12_r,OUTPUT);
	pinMode(m12_g,OUTPUT);
	pinMode(m34_r,OUTPUT);
	pinMode(m34_g,OUTPUT);

	pinMode(led12_r,OUTPUT);
	pinMode(led12_y,OUTPUT);
	pinMode(led12_g,OUTPUT);
	pinMode(led34_r,OUTPUT);
	pinMode(led34_y,OUTPUT);
	pinMode(led34_g,OUTPUT);
}

void loop(){
	
    digitalWrite(led12_r,1);
	digitalWrite(led12_y,0);
	digitalWrite(led12_g,0);
	digitalWrite(m12_r,0);
	digitalWrite(m12_g,1);
	digitalWrite(led34_r,0);
	digitalWrite(led34_y,0);
	digitalWrite(led34_g,1);
	digitalWrite(m34_r,1);
	digitalWrite(m34_g,0);
	digitalWrite(A,1);
	digitalWrite(B,1);
	digitalWrite(C,1);
	digitalWrite(D,1);
	digitalWrite(E,0);
	digitalWrite(F,1);
	digitalWrite(G,1);
	digitalWrite(DP,0);
	delay(de_1);
		// 2
		
	digitalWrite(DP,1);
	delay(de_2);
	
		// 3
	
	digitalWrite(DP,0);
    delay(de_1);
		
		//
		
	}
}
