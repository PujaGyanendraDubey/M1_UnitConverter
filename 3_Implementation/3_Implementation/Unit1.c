#include<stdio.h>
#include<math.h>
#define PI 3.1415926535



int main()
{
  int choice;
  int heightChoice;
  int energyChoice;
  int planeAngleChoice;
  int powerChoice;

  int userinputF; // User inputted Height in Foot;
  int userinputIn; // User inputted Height in Inch;
  int userinputJtoCal; // User inputted for Energy in Joule;
  int userinputCaltoJ; // User inputted for Energy in Calories;
  float userinputD; // User inputted for Degree
  float userinputR; // User inputted for Radian
  int userinputW; // User inputted for Power in Watt
  int usertinputHp; // User inputted for Power in Horse Power
  
  int footToInch; // variable that stores the converted Foot to Inch
  int inchToFoot; // variable that stores the converted Inch to Foot;
  float JouleToCal ; // varaible that stores the converted Joule to cal;
  float CaltoJoule; // variable stores the converted Cal to Joule ;
  float DegreetoRadian; //varaible that stores the converted Degree to Radian
  float RadiantoDegree; //varaible that stores the converted Rad to Degree
  float wattToHp; // varaible that stores the converted Watt to Horse Power 
  float hpTowatt; //varaible that stores the converted HP to watt
  int wattToKW; //varaible that stores the converted Watt to KilloWatt
  
    
    printf("Welcome to Unit Converter! \n");
    
    printf("Here is a list of conversion to choose from: \n");
    printf("1.Height\n");
    printf("2.Energy\n");
    printf("3.Plane Angle\n");
    printf("4.Power\n");
    printf("Please enter the option you want to convert.\n");
    scanf("%d",&choice);

    if(choice==1){
      printf("Enter 1 for Conv. Foot to Inch. \n");
      printf("Enter 2 for Conv. Inch to Foot\n");
      scanf("%d",&heightChoice);
      switch(heightChoice){
        case 1:
        printf("Please enter the Height in foot: \n");
        scanf("%d",&userinputF);
        footToInch =  ((userinputF) * 12);
        printf("Height in Inch: %d",footToInch);
        break;

        case 2:
        printf("Please enter the Height in Inch: \n");
        scanf("%d",&userinputIn);
        inchToFoot = ((userinputIn)/12);
        printf("Height in Foot: %d",inchToFoot);
        break;

        default:
        printf("Please enter the correct choice. \n");
        break;
      }
    }

    else if(choice==2){
      printf("Enter 1 for Energy Conversion From Joule To Calorie. \n");
      printf("Enter 2 for Energy Conversion From Calorie To Joule. \n");
      scanf("%d",&energyChoice);
      switch(energyChoice){
        case 1:
        printf("Please enter the input energy in Joule: \n");
        scanf("%d",&userinputJtoCal);
        JouleToCal = ((userinputJtoCal)/4.184);
        printf("Energy in Calorie: %.2f",JouleToCal);
        break;

        case 2:
        printf("Please enter the Energy in Calorie: \n");
        scanf("%d",&userinputCaltoJ);
        CaltoJoule =  ((userinputCaltoJ)* 4.184);
        printf("Energy in Joule: %.2f",CaltoJoule);
        break;

        default:
        printf("Please enter the correct choice. \n");
        break;
      }
    }
    else if(choice==3){
      printf("Enter 1 for Degree to radian:\n");
      printf("Enter 2 for Radian to Degree\n");
      scanf("%d",&planeAngleChoice);
      //const float PI=3.14159;
      

      switch(planeAngleChoice){
        case 1:
        printf("Please enter the Degree: \n");
        scanf("%f",&userinputD);
        DegreetoRadian =  (userinputD*(PI/180));
        printf("Angle in Radian: %.4f",DegreetoRadian);
        break;
      

        case 2:
        printf("Please enter the Radian: \n");
        scanf("%f",&userinputR);
        RadiantoDegree = (userinputR*(180/PI));
        printf("Angle in Degree: %.2f",RadiantoDegree);
        break;

        default:
        printf("Please enter the correct choice. \n");
        break;
      }
    }
    else if(choice==4){
      printf("Enter 1 for Watt to HP:\n");
      printf("Enter 2 for hp to watt:\n");
      printf("Enter 3 for watt to kilowatt:\n");
      scanf("%d",&powerChoice);

      switch(powerChoice){
        case 1:
        printf("Please Enter the Watt:\n");
        scanf("%d",&userinputW);
        wattToHp=((userinputW)/745.7);
        printf("Power in Mechanical hp is: %.2f",wattToHp);
        break;

        case 2:
        printf("Please Enter the Mechanical Hp:\n");
        scanf("%d",&usertinputHp);
        hpTowatt=((usertinputHp)*745.7);
        printf("Power in Mechanical hp is: %.2f",hpTowatt);
        break;

        case 3:
        printf("Please Enter the Watt:\n");
        scanf("%d",&userinputW);
        wattToKW=((userinputW)/1000);
        printf("Power in Kilowatt is: %d",wattToKW);
        break;

        default:
        printf("Please enter the correct choice. \n");
        break;
      }
    }
    else{
    printf("sorry!! Unrecognized inputs, Please enter the valid Inputs. ");
    }

    return 0;
}