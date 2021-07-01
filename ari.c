#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

string ari(string s){
	int words=0,sentence=0,character=0;
	for(int i=0;i<strlen(s);i++)
               {if(isalnum(s[i])){
			character++;
		}
		else if(s[i]==' '){
			words++;
		}
		else if(s[i]=='.' || s[i]=='!' || s[i]=='?'){
			sentence++;
		}
	}
	int ari_index=ceil(4.71*((float)character/(float)words)+0.5*((float)words/(float)sentence)-21.43);
	switch(ari_index)
            {
            
		case 1:
			return "Kindergarten";
		case 2:
			return "First/Second Grade";
		case 3:
			return "Third Grade";
		case 4:
			return "Fourth Grade";
		case 5:
			return "Fifth Grade";
		case 6:
			return "Sixth Grade";
		case 7:
			return "Seventh Grade";
		case 8:
			return "Eighth Grade";
		case 9:
			return "Ninth Grade";
		case 10:
			return "Tenth Grade";
		case 11:
			return "Eleventh Grade";
		case 12:
			return "Twelfth grade";
		case 13:
			return "College student";
		case 14:
			return "Professor";
      
	}
}
