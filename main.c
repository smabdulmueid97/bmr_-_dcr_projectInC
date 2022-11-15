#include <stdio.h>
int main()
{
    int height, weight, age, BMRm, BMRf, activity, DCR1, DCR2, DCR3, DCR4, DCR5, DCR6, DCR7, DCR8, DCR9, DCR10;
    char gender, name[20];

    //BMR input
    printf("Enter your name : ");
    fgets(name,20,stdin);
    printf("Enter your gender (m or f) : ");
    scanf("%c",&gender);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your height : ");
    scanf("%d",&height);
    printf("Enter your weight : ");
    scanf("%d",&weight);

    //DCR input
    printf("\n########### Level Of Activity ###########");
    printf("\n# 1)Sedentary\t\t\t\t#\n# 2)Light Activity\t\t\t#\n# 3)Moderate Activity\t\t\t#\n# 4)Very Active\t\t\t\t#\n# 5)Extra Active\t\t\t# ");
    printf("\n#########################################");
    printf("\n\nChoose your level of activity (1-5) : ");
    scanf("%d",&activity);

    //Calculation
    BMRm=66+(13.7*weight)+(5*height)-(6.8*age);
    BMRf=655+(9.6*weight)+(1.8*height)-(4.7*age);

    DCR1=BMRm*1.2;
    DCR2=BMRm*1.375;
    DCR3=BMRm*1.55;
    DCR4=BMRm*1.725;
    DCR5=BMRm*1.9;

    DCR6=BMRf*1.2;
    DCR7=BMRf*1.375;
    DCR8=BMRf*1.55;
    DCR9=BMRf*1.725;
    DCR10=BMRf*1.9;

    //Results
    switch (gender) {
        case 'm':
            if (activity==1) {printf("\n\Name               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Male\nLevel of Activity  : Sedentary\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRm,DCR1,DCR1);}
            else if (activity==2) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Male\nLevel of Activity  : Light Activity\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRm,DCR2,DCR2);}
            else if (activity==3) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Male\nLevel of Activity  : Moderate Activity\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRm,DCR3,DCR3);}
            else if (activity==4) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Male\nLevel of Activity  : Very Active\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRm,DCR4,DCR4);}
            else if (activity==5) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Male\nLevel of Activity  : %d\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRm,DCR5,DCR5);}
            break;
        case 'f':
            if (activity==1) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Female\nLevel of Activity  : Sedentary\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRf,DCR6,DCR6);}
            else if (activity==2) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Female\nLevel of Activity  : Light Activity\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRf,DCR7,DCR7);}
            else if (activity==3) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Female\nLevel of Activity  : Moderate Activity\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRf,DCR8,DCR8);}
            else if (activity==4) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Female\nLevel of Activity  : Very Active\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRf,DCR9,DCR9);}
            else if (activity==5) {printf("\nName               : %sAge                : %d\nWeight             : %d\nHeight             : %d\nGender             : Female\nLevel of Activity  : Extra Active\nBMR                : %d\nDCR                : %d\nNote               : Based on this calculation, you would need %d calories from food to sustain your daily activities.\n",name,age,weight,height,BMRf,DCR10,DCR10);}
            break;
        default:
            printf("Unspecified Gender.");

    }
}
